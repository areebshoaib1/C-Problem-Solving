#include <stdio.h>
/*
C program for :-
Print right triangle star pattern

*
**
***
****

Author : Muhammad Areeb Shoaib
*/
int main()
{
    int rows = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}