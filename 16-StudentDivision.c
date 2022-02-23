#include <stdio.h>

int main()
{
   int marks;
   printf("Enter the marks: ");
   scanf("%d",&marks);
   if(marks>=80 && marks<=100)
   {
       printf("Honors");
   }
   else if(marks>=60 && marks<=79)
   {
       printf("First Division");
   }
   else if(marks>=50 && marks<=59)
   {
       printf("Second Division");
   }
   else if(marks>=40 && marks<=49)
   {
       printf("Third Division");
   }
   else if(marks>=0 && marks<=39)
   {
       printf("Fail");
   }
   
   return 0;
}