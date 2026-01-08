// 2.4.3@ Top-Level Const

// We use the term top-level const to indicate that the pointer itself is a
// const. When a pointer can point to a const object, we refer to that const
// as a low-level const

#include <iostream>

int main()
{
    int i = 0;
    int *const p1 = &i;             // top-level const
    std::cout << *p1 << std::endl;
    const int ci = 42;
    const int *p2 = &ci;            // low-level const
    const int *const p3 = p2;       // right-most const is top-level
    std::cout << *p3 << std::endl;
    const int &r = ci;              // const in reference types is always low-level
    std::cout << r << std::endl;

    p2 = p3;                        // ok: p2 can change


    return 0;
}