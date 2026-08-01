import { defineConfig } from 'vite'
import browserslist from 'browserslist';
import {browserslistToTargets} from 'lightningcss';

// https://vite.dev/config/
export default defineConfig({
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
