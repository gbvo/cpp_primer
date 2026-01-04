// 2.4.1@ References to Const

#include <iostream>

int main()
{
    int i = 42;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    i = 10;
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;
    return 0;
}