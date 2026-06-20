#include <stdio.h>
/*
C program for :-
Print value and address of a variable
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int a = 10;
    int *p = &a;

    printf("Adress of 'a' variable is: %p\n",p);
    printf("Value of a is: %d ",*p);
    
    
    return 0;
}