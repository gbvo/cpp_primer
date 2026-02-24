/**
 * @file    2_2_1_list_initialization.cpp
 * @brief   in cpp primer section 2.2.1
 *          "Variable Definitions - List Initialization"
 * @author  Planck
 * @date    2026-02-24
 * @details
 */

#include <iostream>

int main()
{
    long double ld = 3.1415926536;
    // int a{ld}, b = {ld};    // error: narrowing conversion required
    int c(ld), d = ld;         // ok: but value will be truncated
    (void)c;
    (void)d;
    return 0;
}