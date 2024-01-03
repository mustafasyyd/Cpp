#include <iostream>
#include "lifoBuff.hpp"

int main (int argc , char** argv)
{

    int length{5}; //5 Bytes

    LIFO_Buf_t lbuf
    {
        5,
        (uint8_t*)malloc(length)
    };

    lbuf.head = (lbuf.base);

    return 0;
}