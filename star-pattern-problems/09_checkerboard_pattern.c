#include <stdio.h>

/*
C program for :-
Print checkerboard pattern
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int rows = 10;

    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < rows / 2; j++)
            {

                printf(" * ");
                printf("   ");
            }
            printf("\n");
        }
        else
        {
            for (int k = 0; k < rows / 2; k++)
            {
                printf("   ");
                printf(" * ");
            }
            printf("\n");
        }
    }

    return 0;
}