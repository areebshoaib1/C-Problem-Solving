#include <stdio.h>
/*
C program for :-
Find transpose of Array
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int arr[3][3] = {
        {11, 12, 14},
        {21, 22, 24},
        {31, 32, 34},
    };

    int arr_2[3][3] = {
        {8, 9, 10},
        {18, 19, 20},
        {28, 29, 30},
    };

    int arr_3[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            arr_3[i][j] = arr[i][j] + arr_2[i][j];
        }
    }
    for (int k = 0; k < 3; k++)
    {
        printf("\n");

        for (int l = 0; l < 3; l++)
        {

            printf("%d ", arr_3[k][l]);
        }
    }

    return 0;
}
