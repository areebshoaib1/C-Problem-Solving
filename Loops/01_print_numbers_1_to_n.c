#include <stdio.h>

/*
C program for :-
Print numbers from 1 to N
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}