#include "driver.h"

#ifdef  SPEC_FEATURE
static unsigned int internal_driver_foo(void)
{
 return DRIVER_RETURN_VALUE;
}
#else
static unsigned int internal_driver_foo2(void)
{
 return DRIVER_RETURN_VALUE;
}
#endif

unsigned int driver_foo(void)
{
  #ifdef  SPEC_FEATURE
  return internal_driver_foo();
  #else
  return internal_driver_foo2();
  #endif
}
