// 2.4.4@ constexpr and Constant Expressions

// A constant expression is an expression whose value cannot change and that
// can be evaluated at compile time.

#include <iostream>
#include "Sales_item.h"

int get_size();
constexpr int size() { return 0; }

int global = 0;

constexpr int i = 0;
int j = 0;

int main()
{
    const int max_files = 20;   // max_files is a constant expression
    const int limit = max_files + 1; // limit is a constant expression
    std::cout << limit << std::endl;
    const int sz = get_size();  // sz is not a constant expression
    std::cout << sz << std::endl;

    // `constexpr` variables
    constexpr int mf = 20;  // 20 is a constant expression, so is mf
    constexpr int lim = mf + 1; // mf + 1 is a constant expression
    std::cout << lim << std::endl;
    // constexpr int sz = get_size(); // error: get_size() is not a `constexpr` function
    constexpr int s = size();   // ok: size() is a `constexpr` function
    std::cout << s << std::endl;

    // literal types
    // the types we can use in a `constexpr` are known as literal types
    // the arithmetic, reference, and pointer types are literal types
    constexpr Sales_item *p = nullptr;
    std::cout << p << std::endl;
    constexpr int *pg = &global;
    std::cout << pg << std::endl;

    static int si;
    constexpr int *psi = &si;
    std::cout << psi << std::endl;

    // pointers and `constexpr`
    // It is important to understand that when we define a pointer in a `constexpr`
    // declaration, the `constexpr` specifier applies to the pointer, not the type
    // to which the pointer points
    const int *p1 = nullptr;        // p1 is a pointer to a const int
    constexpr int *p2 = nullptr;    // p2 is a const pointer to an int

    constexpr const int *p3 = &i;
    constexpr int *p4 = &j;

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;

    return 0;
}

int get_size()
{
    return 0;
}
