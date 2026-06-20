#include <stdio.h>
/*
C program for :-
Swap two numbers using pointers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int a = 10;
    int b = 5;

    printf("Before Swap\n");
    printf("a = %d\nb = %d\n", a, b);

    int *p1 = &a;
    int *p2 = &b;

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swap\n");
    printf("a = %d\nb = %d", a, b);

    return 0;
}