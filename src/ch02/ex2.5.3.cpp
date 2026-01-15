// 2.5.3@ The `decltype` Type Specifier

// Sometimes we want to define a variable with a type that the compiler
// deduces from an expression but do not want to use that expression to
// initialize the variable. In this case we use `decltype`.

#include <iostream>

int f();
int f()
{
    return 0;
}

int main()
{
    int x = 0;
    decltype(f()) sum = x;
    std::cout << sum << std::endl;

    const int ci = 0, &cj = ci;

    // Different from the way `auto` does, `decltype` includes top-level const and references.
    // It is worth noting that `decltype` is the only context in which a variable defined as a
    // reference is not treated as a synonym for the object to which it refers.

    decltype(ci) x1 = 0; // x1 is a const int
    decltype(cj) y = x1; // y is a const int& and is bound to x1
    // decltype(cj) z; // error: z is a reference and must be initialized

    std::cout << y << std::endl;

    // `decltypes` and References
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b = 0; // ok: the expression yields an int so b is an int
    // decltype(*p) c; // error: c is int& and must be initialized
    // decltype((i)) d; // error: d is int& and must be initialized
    decltype(i) e = 0; // ok: e is an int

    std::cout << p << r << b << e << std::endl;
    return 0;
}
