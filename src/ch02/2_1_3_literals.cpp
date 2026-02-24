/**
 * @file    2_1_3_literals.cpp
 * @brief   cpp primer section 2.1.3, "Literals"
 * @author  Planck
 * @date    2026-02-19
 * @details
 */

#include <iostream>

int main()
{
    int a = 20; // decimal
    (void)a;
    int b = 024; // octal
    (void)b;
    int c = 0x14; // hexadecimal
    (void)c;

    // multiline string literal
    std::cout << "a really, really long string literal "
                 "that spans two lines"  << std::endl;

    // escape sequences
    std::cout << "Hi \x4dO\115!\n";  // prints `Hi MOM!` followed by a newline
    std::cout << '\115' << '\n';     // prints `M` followed by a newline

    return 0;
}
