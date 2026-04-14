#include <stdio.h>

/*
C program for :-
Print multiplication table of a number
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}