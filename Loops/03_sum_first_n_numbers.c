#include <stdio.h>
/*
C program for :-
Find sum of first N natural numbers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int N;
    int a = 0;
    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        a += i;
    }

    printf("%d", a);

    return 0;
}