// 2.5.1@ Type Aliases

#include <iostream>

int main()
{
    // pointers, const and type aliases
    typedef char *pstring;

    // base types are all `pstring`
    const pstring cptsr = nullptr;        // cpstr is a const pointer to char
    const pstring *ps = nullptr;          // ps is a pointer to a const pointer to char
    const pstring *const cps = nullptr;   // cps is a const pointer to a const pointer to char

    std::cout << cptsr << std::endl;
    std::cout << ps << std::endl;
    std::cout << cps << std::endl;

    return 0;
}