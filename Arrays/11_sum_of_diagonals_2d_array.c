#include <stdio.h>

/*
C program for :-

Write a C program to find the sum of the primary and secondary diagonals of a  2D array.
The program should:
Calculate the sum of the primary diagonal (top-left to bottom-right).
Calculate the sum of the secondary diagonal (top-right to bottom-left).
Print the total sum of both diagonals.

Author : Muhammad Areeb Shoaib
*/

int main()

{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int primary = 0;
    int secondary = 0;
    int total_sum;
    int k = 2;

    for (int i = 0; i < 3; i++)
    {

        primary += arr[i][i];
    }

    for (int j = 0; j < 3; j++)
    {
        secondary += arr[j][k];
        k--;
    }

    printf("sum of the primary diagonal is: %d\n", primary);
    printf("sum of the secondary diagonal is: %d\n", secondary);
    printf("sum of both diagonals is: %d", primary + secondary);

    return 0;
}