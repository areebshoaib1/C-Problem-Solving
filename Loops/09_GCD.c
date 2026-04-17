#include <stdio.h>
/*
C program for :-
Find GCD of two numbers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int n1;
    int n2;
    int gcd = 1;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter Second number: ");
    scanf("%d", &n2);

    int min = (n1 > n2) ? n1 : n2;

    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("Greatest common divisor is %d", gcd);
}