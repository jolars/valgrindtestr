context("Wave the red flag at valgrind")

test_that("valgrind responds to this leak", {
  expect_error(ouch(), NA)
})
