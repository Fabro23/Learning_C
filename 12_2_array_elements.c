#include <stdio.h>

int main()
{
    int array[] ={1,2,3,4,5};
    printf("Array before change: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    array[0] = 10; array[4] = 50;
    printf("Array after change: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}