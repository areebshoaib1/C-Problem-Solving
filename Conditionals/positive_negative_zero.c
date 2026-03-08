#include <stdio.h>
/* 

C program for :-
Check whether a number is positive, negative, or zero
Author : Muhammad Areeb Shoaib

*/
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    
    if (n < 0)
    {
        printf("Number is Negative\n");
        
    }
    else if (n > 0)
    {
        printf("Number is positve\n");
        
    }
    else if (n == 0)
    {
        printf("Number is zero\n");
        
    }
    
    return 0;
}