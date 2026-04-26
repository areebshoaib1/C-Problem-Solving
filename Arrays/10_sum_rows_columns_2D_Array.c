#include <stdio.h>
/*
C program for :-
Find sum of each row and column of 2D array
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int arr[3][3] = {
        {11, 12, 14},
        {21, 22, 24},
        {31, 32, 34},
    };

    int r1 = 0;
    int r2 = 0;
    int r3 = 0;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                r1 += arr[i][j];
                c1 += arr[j][i];
            }
            else if (i == 1)
            {
                r2 += arr[i][j];
                c2 += arr[j][i];
            }
            else if (i == 2)
            {
                r3 += arr[i][j];
                c3 += arr[j][i];
            }
        }
    }

    printf("Sum of Row 1 : %d \n", r1);
    printf("Sum of Row 2 : %d \n", r2);
    printf("Sum of Row 3 : %d \n", r3);

    printf("Sum of Column 1 : %d \n", c1);
    printf("Sum of Column 2 : %d \n", c2);
    printf("Sum of Column 3 : %d \n", c3);

    return 0;
}