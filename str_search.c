#include <stdio.h>
#include <string.h>
void main()
{
  char des [100] = "we are super kids";
  char se [10] = "super";
  if ((strstr(des, se)) != NULL)
  printf("Found");
  else
  printf("Not found");
}#include <stdio.h>
#include <string.h>
void main()
{
    char name [7] = "madhura";
    char new[100] = "hello ";
    printf("%c", name[6]);
    printf(" length of the string is %d\n", strlen(name));
    strcat(new, name);
    printf("%s",new);
    printf("%zs",strstr(new, "h"));
}#include <stdio.h>
#include <string.h>
void main()
{
    char name [7] = "madhura";
    char new[100] = "hello ";
    printf("%c", name[6]);
    printf(" length of the string is %d\n", strlen(name));
    strcat(new, name);
    printf("%s",new);
    printf("%zs",strstr(new, "h"));
}