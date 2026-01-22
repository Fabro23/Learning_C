#include <stdio.h>

int main()
{
    char *array[] = {"First sentence", "Second sentence","Third sentence","Fourth sentence","Fifth sentence"};
    for (int i = 0; i < 5; i++)
    {
        printf("%s \n",array[i]);
    }
}