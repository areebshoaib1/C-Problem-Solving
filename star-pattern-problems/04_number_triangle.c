#include <stdio.h>

/*
C program for :-
Print number pattern

1
12
123
1234

Author : Muhammad Areeb Shoaib
*/

int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        }

    return 0;
}