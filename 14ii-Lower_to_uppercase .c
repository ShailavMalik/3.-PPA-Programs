//Program to convert lowercase to uppercase with the help of ASCII values
#include <stdio.h>
#include <string.h> //library to use string related predefined functions

int main()
{
   char string1[30];
   printf("Enter the string: ");
   gets(string1); //It takes whitespace as string while scanf() terminates when user press spacebar
   for (int i = 0; string1[i] != '\0'; i++)
   {
      if(string1[i]>='a'&& string1[i]<='z')
      {
         string1[i]=string1[i]-32;
      }
   }
   printf("%s", string1);

   return 0;
}