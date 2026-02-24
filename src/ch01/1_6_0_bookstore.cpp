/**
 * @file    1_6_0_bookstore.cpp
 * @brief   in cpp primer section 1.6 "The Bookstore Program"
 * @author  Planck
 * @date    2026-02-19
 * @details
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}