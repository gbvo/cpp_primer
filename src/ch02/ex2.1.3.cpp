// 2.1.3@ Literals

#include <iostream>

int main()
{
    // multiline string literal
    std::cout << "a really, really long string literal "
                 "that spans two lines" << std::endl;

    // escape sequences
    std::cout << "Hi \x4dO\115!\n";

    std::cout << u'\x1234' << std::endl;
    return 0;
}