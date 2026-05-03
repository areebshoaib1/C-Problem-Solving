#include <stdio.h>
/*
C program for :-
Print reverse number pattern

1234
123
12
1

Author : Muhammad Areeb Shoaib
*/
int main()
{
    int rows = 4;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}