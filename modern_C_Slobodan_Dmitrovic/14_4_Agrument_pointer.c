#include <stdio.h>

void incrementArg( int *arg )
{
    (*arg)++;
}

int main()
{
    int a = 1;
    printf("a = %d\n\n",a);
    incrementArg(&a);
    printf("a = %d\n\n",a);
}