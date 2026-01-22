#include <stdio.h>

struct Person
{
    char* name;
    int age;
    double hight;
};

int main()
{
    struct Person Person1;
    Person1.name = "Fabrizio";
    Person1.age = 23;
    Person1.hight = 1.81;
    printf("The person name is %s\n", Person1.name);
    printf("The person is %d years old\n", Person1.age);
    printf("The person hight is %.2f m\n", Person1.hight);
}