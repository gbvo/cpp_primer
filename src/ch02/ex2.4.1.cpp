// 2.4.1@ References to Const

#include <iostream>

int main()
{
    int i = 42;
    const int &r1 = i;          // we can bind a const int& to a plain int
    const int &r2 = 42;         // ok: bind a const int& to a literal
    const int &r3 = r1 * 2;     // ok: bind a const int& to an expression

    i = 10;
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;

    double dval = 3.14;
    const int& ri = dval;       // ri is bound to a temporary object
    dval = 0;
    std::cout << ri << std::endl;

    return 0;
}