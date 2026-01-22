#include <stdio.h>

int main()
{
    double num = 14.4;
    double *p = &num;
    printf("Dereferenced pointer: %.3f\n",*p);
    *p = 2;
    printf("Variable after change: %.3f\n",num);
}