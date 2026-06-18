#include <stdio.h>

/*
C program for :-
Recursive function for Fibonacci
Author : Muhammad Areeb Shoaib
*/

int fabonacii(int number);
int fabonacii(int number)
{
    if (number == 0)
    {
        return 0;
    }

    else if (number == 1)
    {
        return 1;
    }

    return fabonacii(number - 1) + fabonacii(number - 2);
}

int main()
{
    int number;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("%d ", fabonacii(i));
    }

    return 0;
}