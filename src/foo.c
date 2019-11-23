
#if !defined(UNIT_TEST) || (defined(UNIT_TEST) && defined(TESTFOOFUNC1))
int FOO_func1(int a, int b){
    int result;
    // Do something useful operation 1
    result = a + b;
    return result;
}
#endif
#if !defined(UNIT_TEST) || (defined(UNIT_TEST) && defined(TESTFOOFUNC2))
int FOO_func2(int a, int b){
    int result;
    // Do something useful operation 2
    result = a - b;
    return result;
}
#endif