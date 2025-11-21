#include<stdio.h>
void names (char first[], char last[], int sw)
{
    int i = 0;
    char full[100];
    while (first[i]!= '\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;
    int j = 0;
    while (last[j]!= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
        printf("%s ",full);
        int len = i+1;
        if (len<sw)
        printf("fits in the screen");
        else
        printf("does not fit in the screen!");
}
    void main()
    {
        char first[50] = "raj";
        char last[50] = "kumar";
        int sw =12;
        names (first , last, sw);
    }
    
    