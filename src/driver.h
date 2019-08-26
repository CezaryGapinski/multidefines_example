#ifndef _DRIVER_H
#define _DRIVER_H

#ifdef SPEC_FEATURE
#include "driver_return_one.h"
#else
#include "driver_return_two.h"
#endif

#define DRIVER_RETURN_VALUE DRIVER_RETURN_VALUE_INTERNAL

unsigned int driver_foo(void);

#endif // _DRIVER_H
