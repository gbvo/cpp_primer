// 2.3.3@ Understanding Compound Type Declarations

#include <iostream>

int main()
{
    // Poniters to pointers
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    std::cout << **ppi << std::endl;

    // References to pointers
    int i = 42;
    int *p = nullptr;   // p is a pointer to int
    int *&r = p;        // r is a reference to the pointer p
    r = &i;
    *r = 0;
    std::cout << i << std::endl;

    return 0;
}