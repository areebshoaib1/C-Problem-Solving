#include <stdio.h>

/*
C program for :-
Count digits in a number
Author : Muhammad Areeb Shoaib
*/

int main()
{
    long number;
    int count = 0;
    printf("Enter number: ");
    scanf("%ld", &number);

    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("Total digits are %d", count);

    return 0;
}