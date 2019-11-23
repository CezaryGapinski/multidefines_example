#ifndef _FOO_H
#define _FOO_H

#if !defined(UNIT_TEST) || (defined(UNIT_TEST) && defined(TEST_FOO_FUNC1))
int FOO_func1(int a, int b);
#endif
#if !defined(UNIT_TEST) || (defined(UNIT_TEST) && defined(TEST_FOO_FUNC2))
int FOO_func2(int a, int b);
#endif
#endif // _FOO_H