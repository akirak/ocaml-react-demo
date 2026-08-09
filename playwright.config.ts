import { defineConfig, devices } from '@playwright/test'

const appUrl = 'http://127.0.0.1:8000'

export default defineConfig({
  testDir: './e2e',
  fullyParallel: true,
  forbidOnly: Boolean(process.env.CI),
  retries: process.env.CI ? 2 : 0,
  workers: process.env.CI ? 1 : undefined,
  reporter: 'html',
  use: {
    baseURL: appUrl,
    launchOptions: {
      executablePath:
        process.env.PLAYWRIGHT_LAUNCH_OPTIONS_EXECUTABLE_PATH,
    },
    trace: 'on-first-retry',
  },
  projects: [
    {
      name: 'chromium',
      use: { ...devices['Desktop Chrome'] },
    },
  ],
})
