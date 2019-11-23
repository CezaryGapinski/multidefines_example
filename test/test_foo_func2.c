#include "unity.h"
#include "foo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

// Dummy for FOO_func1
int FOO_func1(int a, int b)
{
    return a + b + 1;
}

void test_foo_func2(void)
{
    TEST_ASSERT_EQUAL_INT(5, FOO_func1(2, 2));
    TEST_ASSERT_EQUAL_INT(0, FOO_func2(2, 2));
}
