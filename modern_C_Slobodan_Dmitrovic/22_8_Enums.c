#include <stdio.h>

int main()
{
    enum Colors
    {
        RED,
        YELLOW,
        BLUE
    } arbitraryColors;

    arbitraryColors = YELLOW;
    switch (arbitraryColors)
    {
    case RED:
        printf("ROJO!!!\n");
        break;
    case YELLOW:
        printf("AMARELLOOO!!!\n");
        break;
    case BLUE:
        printf("AZULJOEPUTAA!!!\n");
        break;
    default:
        break;
    }
}