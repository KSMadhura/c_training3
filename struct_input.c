#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    int max_speed[100];
    int price;
};
void main()
{
      int n;
    printf("enter number of the car: ");
    scanf("%d", &n);
    struct car c[n];
    for(int i = 0; i<n; i++)
{ 
    printf("enter the name of the car: ");
    scanf("%s",&c[i].name);
    
    printf("enter the max_speed of the car: ");
    scanf("%d",&c[i].max_speed);
    
    printf("enter the price of the car: ");
    scanf("%d",&c[i].price);
}
}