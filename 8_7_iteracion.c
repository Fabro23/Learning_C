#include <stdio.h>

int main(void)
{
    int a = 1; 
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d: Variable desde el for: %d\n",i,a);
    }
    int j = 0;
    while (j < 10)
    {
        printf("%d: Variable desde el while: %d\n",j,a);
        j++;
    }
}