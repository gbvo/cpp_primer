// 2.4@ Const Qualifier

#include <iostream>


int main()
{
    extern int a;
    extern const int bufSize;

    std::cout << bufSize << std::endl;
    std::cout << a << std::endl;
    return 0;
}