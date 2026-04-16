#include <stdio.h>
/*
C program for :-
Find GCD of two numbers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    int n1;
    int n2;
    int a = 0;
    int b = 0;
    int c = 0;
    int arr_1[50];
    int arr_2[50];
    printf("Enter first number: \n");
    scanf("%d", &n1);
    printf("Enter Second number: \n");
    scanf("%d", &n2);

    for (int i = 2; i < n1; i++)
    {

        if (n1 % i == 0)
        {
            arr_1[i] = i;
        }
        else
        {
            arr_1[i] = -1;
        }
    }

    for (int j = 2; j < n2; j++)
    {
        if (n2 % j == 0)
        {
            arr_2[j] = j;
        }
        else
        {

            arr_2[j] = -2;
        }
    }

    for (int k = 2; k < n1 && k < n2; k++)
    {
        if (arr_1[k] == arr_2[k] && arr_1[k] != -1 && arr_2[k] != -2)
        {

            a = arr_1[k];
            if (a > b)
            {
                b = a;
            }
        }
    }
    printf("Greatest common divisor is : %d\n", b);

    return 0;
}

