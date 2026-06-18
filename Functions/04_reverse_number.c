#include <stdio.h>
#include <stdlib.h>

/*
C program for :-
Function to reverse a number
Author : Muhammad Areeb Shoaib
*/

char *reverse(int num);
char *reverse(int num)
{
    int num_2 = num;
    int count = 0;

    if (num == 0)
    {
        char *str = malloc(2);
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    char *str = malloc(count+1);
    str[count] = '\0';

    for (int i = 0; i < count; i++)
    {
        str[i] = (num_2 % 10) + '0';
        num_2 = num_2 / 10;
    }

    return str;
}

int main()
{

    int number;
    printf("Enter number: ");
    scanf("%d" , &number);

    char *reverse1 = reverse(number);
    printf("Reversed: %s", reverse1);

    free(reverse1);

    return 0;
}