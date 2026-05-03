#include <stdio.h>

/*
C program for :-

Print pyramid pattern

  *
 ***
*****

Author : Muhammad Areeb Shoaib
*/

int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}