#include <stdio.h>

/*
C program for :-
Calculate electricity bill using slabs
Author : Muhammad Areeb Shoaib
*/

int main()
{
    int units;
    int calculation;
    int d;
    printf("Enter units :");
    scanf("%d", &units);
    if (units < 0)
    {
        printf("Invalid Input!");
        return 0;
    }

    else if (units <= 100)
    {
        calculation = units * 5;
    }

    else if (units > 100 && units <= 200)
    {
        d = units - 100;
        calculation = (5 * 100) + (d * 7);
    }

    else if (units > 200)
    {
        d = units - 200;

        calculation = (5 * 100) + (7 * 100) + (d * 10);
    }

    printf("Your bill is %d", calculation);

    return 0;
}