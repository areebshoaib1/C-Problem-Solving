#include <stdio.h>

/*
C program for :-
Recursive function for factorial

Author : Muhammad Areeb Shoaib
*/

unsigned long long factorial(int n);
unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Enter positive number!");
        return 1;
    }

    printf("Factorial of %d is: %llu", number, factorial(number));

    return 0;
}