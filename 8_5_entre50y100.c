#include <stdio.h>

int main(void)
{
    int a = 239;
    if ((a >= 50) && (a <= 100))
    {
        printf("%d esta entre 50 y 100\n",a);
    }
    else
    {
        printf("%d no esta entre 50 y 100\n",a);
    }
}