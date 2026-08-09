import { defineConfig } from 'vite'
import browserslist from 'browserslist';
import {browserslistToTargets} from 'lightningcss';

// https://vite.dev/config/
export default defineConfig({
  server: {
    cors: {
      origin: /^https?:\/\/(?:localhost|127\.0\.0\.1)(?::\d+)?$/,
    },
  },
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
    rollupOptions: {
      output: {
        entryFileNames: "main.js",
      },
    },
  },
})
