/**
 * @file    2_1_2_wraps_around.cpp
 * @brief   in cpp primer section 2.1.2
 *          "Type Conversions - Expressions Involving Unsigned Types"
 * @author  Planck
 * @date    2026-02-19
 * @details
 */

#include <iostream>

int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl;
    std::cout << u + i << std::endl;

    // WRONG: u can never be less than 0; the condition will always succeed
    // for (unsigned u = 10; u >= 0; --u)
    //     std::cout << u << std::endl;

    return 0;
}