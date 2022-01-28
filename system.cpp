#include <stdio.h>
#include "system.h"

void ltoae(long num, char* s, int res, int* x)
{
    char alphabet[37] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    if (num == 0)
    {
        s[0] = '0';
        s[1] = '\0';
    }
    else
    {
        unsigned long NUM = (unsigned long)num;
        unsigned long copy = NUM, i = 0, bit = 0;
        while (copy)
        {
            copy = copy / res;
            i++;
        }
        *x = i;
        s[i] = '\0';
        while (NUM)
        {
            bit = NUM % res;
            s[i - 1] = alphabet[bit];
            i--;
            NUM = NUM / res;
        }
    }
}




