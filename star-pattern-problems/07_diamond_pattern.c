/*
C program for :-
Print diamond pattern
Author : Muhammad Areeb Shoaib
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of a Diamond: ");
    scanf("%d", &n);

    int a = (2 * n) - 3;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        if (i <= n)
        {

            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < (2 * i) - 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        else
        {
            for (int j = 0; j < i - n; j++)
            {
                printf(" ");
            }

            for (int k = a; k > 0; k--)
            {
                printf("*");
            }
            printf("\n");
            a -= 2;
        }
    }

    return 0;
}