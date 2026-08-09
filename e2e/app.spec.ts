import { expect, test } from '@playwright/test'

test('renders the component gallery and supports interactions', async ({
  page,
}) => {
  await page.goto('/')

  await expect(
    page.getByRole('heading', {
      level: 1,
      name: 'An Inertia-powered component gallery',
    }),
  ).toBeVisible()
  await expect(page).toHaveTitle('React.ml Inertia Demo')

  const checkbox = page.getByRole('checkbox', { name: 'Accept terms' })
  await expect(checkbox).toBeChecked()
  await checkbox.click()
  await expect(checkbox).not.toBeChecked()

  await page.getByRole('tab', { name: 'Second' }).click()
  await expect(page.getByRole('tabpanel', { name: 'Second' })).toHaveText(
    'Content of the second tab.',
  )
})

test('navigates between server-owned routes with Inertia', async ({ page }) => {
  await page.goto('/')

  await page.getByRole('link', { name: 'About', exact: true }).click()
  await expect(page).toHaveURL('/about')
  await expect(page).toHaveTitle('About')
  await expect(page.getByText(/^OCaml system version: /)).toBeVisible()

  await page.getByRole('link', { name: 'Greeting', exact: true }).click()
  await expect(page).toHaveURL('/greet/Inertia')
  await expect(
    page.getByRole('heading', { level: 1, name: 'Hey there, Inertia!' }),
  ).toBeVisible()

  await page.getByRole('link', { name: 'Search', exact: true }).click()
  await expect(page).toHaveURL('/search?q=ocaml&page=2')
  await expect(page.getByRole('heading', { name: 'Search route' })).toBeVisible()
  await expect(page.locator('dd')).toHaveText(['ocaml', '2'])

  await page
    .getByRole('link', { name: 'Try the next page with a space in the query' })
    .click()
  await expect(page).toHaveURL('/search?q=react%20router&page=3')
  await expect(page.locator('dd')).toHaveText(['react router', '3'])
})

test('renders a dynamic route on a direct visit', async ({ page }) => {
  await page.goto('/greet/Ada-Lovelace')

  await expect(
    page.getByRole('heading', {
      level: 1,
      name: 'Hey there, Ada-Lovelace!',
    }),
  ).toBeVisible()
})
