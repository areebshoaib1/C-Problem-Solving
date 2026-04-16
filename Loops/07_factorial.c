#include <stdio.h>
/*
C program for :-
Find factorial of a number
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    int factorial = 1;
    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is: %d", number, factorial);

    return 0;
}