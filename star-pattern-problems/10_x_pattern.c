#include <stdio.h>
/*
C program for :-
Print X pattern using stars
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int rows = 20;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == j || i + j == rows - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}