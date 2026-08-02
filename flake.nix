{
  inputs = {
    nixpkgs.url = "github:nix-ocaml/nix-overlays";
    # systems.url = "github:nix-systems/default";

    # OCaml dependencies
    crista = {
      url = "github:akirak/crista";
      inputs.nixpkgs.follows = "nixpkgs";
      inputs.treefmt-nix.follows = "";
    };
  };

  outputs =
    {
      nixpkgs,
      self,
      ...
    }@inputs:
    let
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
                  ofinal: oprev: {
                    crista = oprev.buildDunePackage {
                      inherit (inputs.crista.packages.${system}.default)
                        pname
                        version
                        ;

                      src = inputs.crista.outPath;

                      buildInputs = with ofinal; [ ocaml-syntax-shims ];

                      propagatedBuildInputs = with ofinal; [
                        miou
                        parseff
                      ];

                      doCheck = false;
                    };
                  }
                );
              }
            )
          )
        );
    in
    {
      packages = eachSystem (
        _system: pkgs: with pkgs; {
          default = ocamlPackages.buildDunePackage {
            pname = "react_demo";
            version = "0";
            duneVersion = "3";
            src = self.outPath;

            buildInputs = with ocamlPackages; [ ocaml-syntax-shims ];

            propagatedBuildInputs = with ocamlPackages; [
              crista
              routes
            ];
          };
        }
      );

      devShells = eachSystem (
        system: pkgs: {
          default = pkgs.mkShell {
            inputsFrom = [ self.packages.${system}.default ];
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

              melange
              mlx
              reason
              reason-react
              reason-react-ppx

              utop

              # Possibly duplicate?
              ocaml
              findlib
              dune_3

              # Needed for generating documentation
              # opam
              # odoc
              # odig

              # This may fail to build, so it is turned off by default.
              # (sherlodoc.override { enableServe = true; })
            ])
            # Enable file watcher.
            # ++ lib.optional pkgs.stdenv.isLinux pkgs.inotify-tools
            ;
          };
        }
      );
    };
}
