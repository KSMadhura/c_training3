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
    s1.age = 19;
    s1.marks = 89.6;
    strcpy(s1.name,"poorni");
    
    struct student s2;
    s2.age =21;
    s2.marks =90;
    strcpy(s2.name,"bru");
    
    struct student s3 = { "madhu", 80,56,90.4};
    printf("%s",s3.name);
    printf("%d",s3.age);
    }