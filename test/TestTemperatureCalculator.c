#include "unity.h"
#include "Types.h"
#include "custom_types/CustomTypes.h"
#include <math.h>

#define TEST_CASE(...)

TEST_FILE("TemperatureCalculator.c")

extern float TemperatureCalculator_Calculate(uint16_t val);

void setUp(void)
{
}

void tearDown(void)
{
}

#define TEST_ASSERT_EQUAL_MY_UINT32(expected, actual) \
  UNITY_TEST_ASSERT_EQUAL_UINT32(expected, actual, __LINE__, NULL)

TEST_CASE(1, 2)
TEST_CASE(3, 3)
void testMyCustomUint32(my_uint32 a, my_uint32 b)
{
  TEST_ASSERT_EQUAL_MY_UINT32(a, b);
}

void testTemperatureCalculatorShouldCalculateTemperatureFromMillivolts(void)
{
  float result;

  // Series resistor is 5k Ohms; Reference voltage is 3.0V
  // R(t) = A * e^(B*t); R is resistance of thermisor; t is temperature in C
  result = TemperatureCalculator_Calculate(1000);
  TEST_ASSERT_FLOAT_WITHIN(0.01f, 25.0f, result);

  result = TemperatureCalculator_Calculate(2985);
  TEST_ASSERT_FLOAT_WITHIN(0.01f, 68.317f, result);

  result = TemperatureCalculator_Calculate(3);
  TEST_ASSERT_FLOAT_WITHIN(0.01f, -19.96f, result);
}

void testShouldReturnNegativeInfinityWhen_0_millivoltsInput(void)
{
  TEST_ASSERT_FLOAT_IS_NEG_INF(TemperatureCalculator_Calculate(0));
}
