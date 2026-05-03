#include <stdio.h>

/*
C program for :-
Print inverted triangle

****
***
**
*

Author : Muhammad Areeb Shoaib
*/


int main()
{
    int rows = 4;

    for (int i = rows; i != 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}