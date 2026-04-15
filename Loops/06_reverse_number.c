#include <stdio.h>

/*
C program for :-
Reverse a number
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int N;
    int a;
    int i = 0;
    printf("Enter Number: ");
    scanf("%d", &N);
    while (N != 0)
    {
        a = N % 10;
        N = N / 10;
        printf("%d", a);
        i++;
    }

    return 0;
}