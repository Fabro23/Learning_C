#include <stdio.h>

int main()
{
    int array[] = { 6, 7, 9, 120, 2 };
    int *p = array;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(p + i));
    }
    printf("\n");
}