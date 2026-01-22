#include <stdio.h>

void incrementArg( int arg )
{
    arg++;
}

int main()
{
    int a = 1;
    incrementArg(a);
    printf("Function result: %d\n",a);
}