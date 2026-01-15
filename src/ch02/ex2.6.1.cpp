// 2.6.1@ Defining the `Sales_data` Type

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned uints_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data accum, trans, *salesptr = nullptr;
    std::cout << accum.bookNo << trans.bookNo << salesptr;
    return 0;
}