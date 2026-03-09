#include <stdio.h>
/* 

C program for :-
Check whether a year is a leap year
Author : Muhammad Areeb Shoaib

*/
int main()
{
    int year;
    printf("Enter year :");
    scanf("%d", &year);

    if ((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {

        printf("%d is not  a leap year\n", year);
    }

    return 0;
}