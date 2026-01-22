#include <stdio.h>

typedef struct
{
    char* name;
    int age;
    double hight;
}TPerson;

int main()
{
    TPerson Person1 = {"Fabrizio", 23, 1.81};
    TPerson *pointer_to_Person1 = &Person1;
    printf("The person name is %s\n", pointer_to_Person1->name);
    printf("The person is %d years old\n", pointer_to_Person1->age);
    printf("The person hight is %.2f m\n", pointer_to_Person1->hight);
}