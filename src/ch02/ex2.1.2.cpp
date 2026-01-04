// 2.1.2@ Type Conversions

#include <iostream>

int main()
{
    unsigned char c = -1;  // c has value 255
    std::cout << static_cast<int>(c) << std::endl;

    // the value of c2 is undefined
    // signed char c2 = 256;
    // std::cout << static_cast<int>(c2) << std::endl;

    unsigned u = 10;
    int i = -42;

    // prints 4294967264, i is converted to unsigned before
    // the addition is done
    std::cout << u + i << std::endl;

    unsigned u1 = 42, u2 = 10;
    std::cout << u2 - u1 << std::endl;  // the result will wrap around

    // WRONG: u can never less than 0; the condition will always succeed
    // for (unsigned u = 10; u >= 0; --u)
    //     std::cout << u << std::endl;
    return 0;
}