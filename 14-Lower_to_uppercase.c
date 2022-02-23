//Program to convert lowercase to uppercase using strupr() function
#include <stdio.h>
#include <string.h> //library to use string related predefined functions

int main()
{
   char string1[30];
   printf("Enter the string: ");
   gets(string1);
   strupr(string1);
   printf("%s", string1);

   return 0;
}