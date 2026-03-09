#include <stdio.h>
/* 

C program for :-
Find the largest of 3 numbers
Author : Muhammad Areeb Shoaib

*/
int main()
{
    int n1;
    int n2;
    int n3;

    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter Second number:");
    scanf("%d", &n2);
    printf("Enter Third number:");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d is greater\n", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is greater\n", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("%d is greater\n", n3);
    }

    return 0;
}