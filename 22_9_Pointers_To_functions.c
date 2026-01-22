#include <stdio.h>

void function1(int a)
{
    printf("%d x 10 = %d\n",a,a*10);
}

int function2(int a, int b)
{
    return a / b;
}

int main()
{
    void (*fp1)(int);
    fp1 = function1;
    int (*fp2)(int, int);
    fp2 = function2;
    fp1(1);
    printf("Result of function 2 = %d \n",fp2(6,2));
}