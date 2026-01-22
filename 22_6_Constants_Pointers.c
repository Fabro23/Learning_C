#include <stdio.h>

int main()
{
    const int variable = 1;
    printf("Constant variable = %d\n",variable);
    int x = 2;
    const int *pointer1 = &x; // constant pointed-to object, you can not change value 2 via pointer
    printf("Constant pointed-to object = %d\n",*pointer1);
    int y = 3;
    int *const pointer2 = &y; // constant pointer, you can not change memory address
    printf("Constant pointer = %d\n",*pointer2);
}