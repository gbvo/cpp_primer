// 2.4.2@ Pointers and Const

#include <iostream>

int main()
{
    // pointers to const

    const double pi = 3.14;
    // double *ptr = &pi;       // error: ptr is a plain pointer
    const double *cptr = &pi;   // ok: cptr points to a double that is const
    std::cout << *cptr << std::endl;
    // *cptr = 42;              // error: cannot assign to *cptr

    double dval = 3.14;
    cptr = &dval;               // ok: but can't change dval through cptr

    // const pointers

    int errNumb = 0;
    int *const curErr = &errNumb;   // curErr will always point to errNumb
    if (*curErr) {
        // errorHandle();
        *curErr = 0;    // ok: reset the value of the object to which curErr is bound
    }

    const double *const pip = &pi;  // pip will always point to pi
    std::cout << *pip << std::endl;

    return 0;
}