// 2.2.1@ Variable Definitions

#include <iostream>

int main()
{
    // List initialization
    long double ld = 3.1415926535;
    // int a{ld}, b = {ld};  // error: narrowing conversion required
    // std::cout << a << b << std::endl;
    int c(ld), d = ld;    // ok: but value will be truncated
    std::cout << c << d << std::endl;

    // Default initialization
    // int i;
    // std::cout << i << std::endl; // error: the vaule of i is undefined
    return 0;
}