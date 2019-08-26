#include "unity.h"
#include "driver.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_driver_foo(void)
{
  TEST_ASSERT_EQUAL_UINT(1, driver_foo());
}
