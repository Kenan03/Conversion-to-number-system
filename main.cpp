#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "system.h"



int main()
{
    int x;
    int res;
    long num;
    char s[1000];
    printf("Enter number: ");
    if (scanf("%ld", &num) != 1)
    {
        printf("Incorrect input!");
        return 0;
    }
    printf("Enter system scisleniya: ");
    scanf("%d", &res);

    ltoae(num, s, res, &x);
    printf("Result: ");
    for (int i = 0; i < x; i++)
        printf("%c", s[i]);

}












