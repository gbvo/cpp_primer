// 2.3.2@ Pointers

#include <iostream>

int main()
{
    // void Pointers
    double obj = 3.14;
    double *pd = &obj;

    // void* can hold the address value of any data pointer type
    void *pv = &obj;
    pv = pd;
    std::cout << *static_cast<double*>(pv) << std::endl;
    return 0;
}
