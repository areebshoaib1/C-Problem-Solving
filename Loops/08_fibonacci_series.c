#include <stdio.h>
/*
C program for :-
Write a C program to input a number and print Fibonacci series up to that many terms.
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int number;
    int a = 0;
    int b = 1;
    int c;

    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        if (i == 0)
        {
            printf("%d", a);
        }
        else if (i == 1)
        {
            printf("%d", b);
        }
        else
        {

            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
