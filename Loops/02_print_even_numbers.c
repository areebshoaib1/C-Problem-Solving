#include <stdio.h>
/*
C program for :-
Print all even numbers between 1 and N
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}