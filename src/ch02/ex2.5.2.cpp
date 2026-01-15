// 2.5.2@ The `auto` Type Specifier

#include <iostream>

int main()
{
    // compound types, const and auto
    int i = 0, &r = i;
    auto a = r; // a is an int

    const int ci = i, &cr = ci;
    auto b = ci;    // b is an int
    auto c = cr;    // c is an int
    auto d = &i;    // d is an int*, same as auto *d = &int
    auto e = &ci;   // e is a const int*
    const auto f = ci; // f is a const int
    auto &g = ci;  // g is a const int& that is bound to ci
    // auto &h = 42; // error: can't bind a plain reference to a literal
    const auto &j = 42; // ok

    std::cout << a << b << c << d << e << f << g << j << std::endl;

    return 0;
}