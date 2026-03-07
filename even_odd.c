#include <stdio.h>
/*
C program for :-
Check whether a number is even or odd
Author : Muhammad Areeb Shoaib
*/
int main()
{

    int n;
    printf("Enter number :");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}