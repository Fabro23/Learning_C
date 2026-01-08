#include <stdio.h>

int main()
{
    int array[] = {1,2,3,4,5};
    int *p = array;
    p += 2;
    printf("Third element: %d\n",*p);
    p += 1;
    printf("Fourth element: %d\n",*p);
}