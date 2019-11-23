#include "unity.h"
#include "foo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

// Dummy for FOO_func2
int FOO_func2(int a, int b)
{
    return a - b - 1;
}

void test_foo_func1(void)
{
    TEST_ASSERT_EQUAL_INT(4, FOO_func1(2, 2));
    TEST_ASSERT_EQUAL_INT(-1, FOO_func2(2, 2));
}
