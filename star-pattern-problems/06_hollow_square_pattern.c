#include <stdio.h>

/*
C program for :-
Print hollow square pattern
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int rows = 6;

    for (int i = 0; i < rows; i++)
    {

        if (i == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("*");
            }
            printf("\n");
                }

        else if (i > 0 && i <= rows - 2)
        {

            printf("*");

            for (int k = 0; k < rows - 2; k++)
            {
                printf(" ");
            }

            printf("*");
            printf("\n");
        }

        else
        {
            for (int l = 0; l < rows; l++)
            {
                printf("*");
            }
        }
    }

    return 0;
}