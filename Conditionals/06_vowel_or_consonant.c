#include <stdio.h>


/*
C program for :-
Check whether a character is vowel or consonant
Author : Muhammad Areeb Shoaib
*/
int main()
{
    char letter;
    printf("Enter character :\n");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("Character is Vowel\n");
    }
    else if  (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("Character is Vowel\n");
    }
    else
    {
        printf("Character is Consonant ");
    }

    return 0;
}