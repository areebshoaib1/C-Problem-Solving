#include <stdio.h>
/*
C program for :-
Find length of string using pointers
Author : Muhammad Areeb Shoaib
*/
int main()
{
    char str[100] = "countstringlength";
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }

    printf("Lenght of a string is %d", count);

    return 0;
}