#include <iostream>

int getBufSize(int n)
{
    return n * 1024;
}

extern const int bufSize = getBufSize(2);

int a = 10;
