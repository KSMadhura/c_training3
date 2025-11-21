#include<stdio.h>
void sum_value (int a, int b)
{
    int sum =  a+b;
    printf("%d", sum);
}
void sum_ref (int *a, int *b)
{
    int sum = *a+*b;
    printf("%d", sum);
}
void main()
{
    int a = 90;
    int b = 88;
    sum_value(a,b);
    sum_ref(&a,&b);
}