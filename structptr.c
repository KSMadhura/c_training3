#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p = &s1;
    strcpy(p -> name, "madhura");
    p -> age = 18;
    p -> marks = 90.0;
    printf("%d" , p->age);
    printf("%s", p ->name);
    printf("%f", -> marks);
}