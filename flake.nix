{
  inputs = {
    nixpkgs.url = "github:nix-ocaml/nix-overlays";
    treefmt-nix.url = "github:numtide/treefmt-nix";
    # systems.url = "github:nix-systems/default";

    # OCaml dependencies
    crista = {
      url = "github:akirak/crista";
      inputs.nixpkgs.follows = "nixpkgs";
      inputs.treefmt-nix.follows = "";
    };
  };

  nixConfig = {
    extra-substituters = [
      "https://akirak.cachix.org"
    ];
    extra-trusted-public-keys = [
      "akirak.cachix.org-1:WJrEMdV1dYyALkOdp/kAECVZ6nAODY5URN05ITFHC+M="
    ];
  };

  outputs =
    {
      nixpkgs,
      self,
      ...
    }@inputs:
    let
      inherit (nixpkgs) lib;

      eachSystem =
        f:
        nixpkgs.lib.genAttrs nixpkgs.lib.systems.flakeExposed (
          system:
          f system (
            nixpkgs.legacyPackages.${system}.extend (
              _self: super: {
                # You can set the OCaml version to a particular release. Also, you
                # may have to pin some packages to a particular revision if the
                # devshell fail to build. This should be resolved in the upstream.
                ocamlPackages = super.ocaml-ng.ocamlPackages_5_5.overrideScope (
                  inputs.crista.overlays.ocamlPackages
                );
              }
            )
          )
        );

      makeCommonArgs = ocamlPackages: {
        duneVersion = "3";
        src = self.outPath;
        nativeBuildInputs = with ocamlPackages; [
          melange
          reason
        ];
        buildInputs = with ocamlPackages; [ ocaml-syntax-shims ];
        propagatedBuildInputs = with ocamlPackages; [
          melange
          reason
          reason-react
          reason-react-ppx
        ];
      };

      ocamlPackagesOverlay =
        final: _prev:
        let
          commonArgs = makeCommonArgs final;
        in
        {
          base-ui = final.buildDunePackage (
            commonArgs
            // {
              pname = "base_ui";
              version = "0";
            }
          );

          inertia-react = final.buildDunePackage (
            commonArgs
            // {
              pname = "inertia_react_bindings";
              version = "0";
            }
          );
        };

      treefmtEval = eachSystem (
        _system: pkgs:
        inputs.treefmt-nix.lib.evalModule pkgs {
          projectRootFile = "flake.nix";
          programs = {
            nixfmt.enable = true;
            zizmor.enable = true;
            ocamlformat.enable = true;
          };
        }
      );
    in
    {
      overlays.ocamlPackages = ocamlPackagesOverlay;

      packages = eachSystem (
        _system: pkgs:
        let
          ocamlPackages = pkgs.ocamlPackages.overrideScope ocamlPackagesOverlay;
          commonArgs = makeCommonArgs ocamlPackages;
        in
        {
          inherit (ocamlPackages) base-ui inertia-react;

          app = ocamlPackages.buildDunePackage (
            commonArgs
            // {
              pname = "react_demo";
              version = "0";
              propagatedBuildInputs =
                commonArgs.propagatedBuildInputs
                ++ (with ocamlPackages; [
                  crista
                  crista-miou
                  pure-html
                  routes
                  base-ui
                  inertia-react
                ]);
            }
          );
        }
      );

      devShells = eachSystem (
        system: pkgs:
        let
          playwright-browsers = pkgs.playwright-driver.browsers.override {
            withFirefox = false;
            withWebkit = false;
            withFfmpeg = false;
          };
        in
        {
          default = pkgs.mkShell {
            inputsFrom = [
              self.packages.${system}.app
              self.packages.${system}.base-ui
              self.packages.${system}.inertia-react
            ];
            packages = [
              pkgs.nodejs
              pkgs.corepack
              pkgs.typescript-go
              pkgs.process-compose
            ]
            ++ (with pkgs.ocamlPackages; [

              ocaml-lsp
              ocamlformat
              ocp-indent

              mlx

              utop

              # Possibly duplicate?
              ocaml
              findlib
              dune_3
              # This may fail to build, so it is turned off by default.
              # (sherlodoc.override { enableServe = true; })
            ])
            # Enable file watcher.
            # ++ lib.optional pkgs.stdenv.isLinux pkgs.inotify-tools
            ;
          };

          # A devshell for running Playwright scripts for E2E
          playwright = pkgs.mkShell {
            packages = [
              pkgs.nodejs
              pkgs.corepack
              playwright-browsers
              pkgs.simple-http-server
            ];

            shellHook = ''
              browser_executable="$(find -L '${playwright-browsers}' -name ${
                if pkgs.stdenv.targetPlatform.isLinux then "chrome" else "Chromium"
              } -type f)"

              export PLAYWRIGHT_LAUNCH_OPTIONS_EXECUTABLE_PATH="''${browser_executable}"
            '';
          };
        }
      );

      formatter = eachSystem (system: _pkgs: treefmtEval.${system}.config.build.wrapper);

      checks = eachSystem (
        system: pkgs:
        self.packages.${system}
        // {
          formatting = treefmtEval.${system}.config.build.check self;
        }
      );
    };
}
