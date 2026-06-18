#include <stdio.h>

/*
C program for :-
Function to check prime number
Author : Muhammad Areeb Shoaib
*/

void isprime(int number);
void isprime(int number)
{
    int prime = 0;

    if (number <= 1)
    {
        prime = 1;
    }

    else
    {
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime ");
    }
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
    else
    {
        isprime(number);
    }

    return 0;
}