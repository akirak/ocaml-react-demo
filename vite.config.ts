import { defineConfig } from 'vite'
import { nodeResolve } from "@rollup/plugin-node-resolve";
import browserslist from 'browserslist';
import {browserslistToTargets} from 'lightningcss';

// https://vite.dev/config/
export default defineConfig({
  plugins: [
    nodeResolve(),
  ],
  css: {
    transformer: 'lightningcss',
    lightningcss: {
      targets: browserslistToTargets(browserslist(">= 0.25%")),
    },
  },
  root: "public",
  build: {
    outDir: "../dist",
    emptyOutDir: true,
    cssMinify: "lightningcss",
  },
})
