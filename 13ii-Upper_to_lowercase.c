#include <stdio.h>
#include <string.h>
int main()
{
   char string1[30];
   printf("Enter the string :");
   gets(string1);
   for(int i=0;string1[i]!='\0';i++)
   {
if(string1[i]>='A' && string1[i]<='Z')
{
string1[i]=string1[i]+32;
}
   }
printf("%s",string1);
   
   return 0;
}
