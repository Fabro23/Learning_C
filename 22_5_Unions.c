#include <stdio.h>

typedef union 
{
    char* arr;
    int digit;
    double real;
} myUnion;


int main()
{
    myUnion exampleUnion;
    exampleUnion.arr = "HELLO MFK!!!";
    printf("Print arr: %s\n",exampleUnion.arr);

    exampleUnion.digit = 9;
    printf("Print digit: %d\n",exampleUnion.digit);

    exampleUnion.real = 1283.23;
    printf("Print real: %.2f\n",exampleUnion.real);
}