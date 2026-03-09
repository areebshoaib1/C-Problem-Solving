#include <stdio.h>
/*
C program for :-
Check whether a number is prime or not 
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d", &number);
    int is_prime = 1;

    if (number <= 1)
    {
        printf("Number is not Prime");
        return 0;
    }
    else if (number == 2)
    {
        printf("Number is prime");
        return 0;
    }

    for (int i = 2; i * i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not Prime");
    }

    return 0;
}