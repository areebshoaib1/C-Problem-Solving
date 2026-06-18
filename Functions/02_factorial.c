#include <stdio.h>

/*
C program for :-
Function to calculate factorial
Author : Muhammad Areeb Shoaib
*/

int factorial(int num);
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial of negative number is undefined !");
        return 1;
    }

    printf("Factorial of %d is: %d", number, factorial(number));

    return 0;
}