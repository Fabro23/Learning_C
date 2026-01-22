#include <stdio.h>

int function(const int a, const char b)
{
    printf("a = %d, b = %c\n",a,b);
    return 1;
}

int main()
{
    int ani= 2;
    char cha = 'd';
    function(ani,cha);
}