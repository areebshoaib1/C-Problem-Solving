#include <stdio.h>

/*
C program for :-
Print pattern using 2D array
Hollow Right Triangle
*
* *
*   *
*     *
* * * * *
Author : Muhammad Areeb Shoaib
*/

int main()
{
    char arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j || j == 0 || i == 4)
            {
                arr[i][j] = '*';
            }
            else
            {
                arr[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}