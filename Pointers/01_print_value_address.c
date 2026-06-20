#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Adress of 'a' variable is: %p\n",p);
    printf("Value of a is: %d ",*p);
    
    
    return 0;
}