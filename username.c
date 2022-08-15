#include <stdio.h>
#include <string.h>
int main()
{
  char firstname[100];
  char lastname[100];
  printf("Enter Your Name");
  scanf(" %s %s",&firstname,&lastname);
  printf(" \"Hello, %s %s\" ",firstname,lastname);
}
