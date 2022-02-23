//program to find out the factorial value of user entered number using for loop
#include <stdio.h>

int main()
{

   int num;
   printf("Enter the number :");
   scanf("%d", &num);
   int factorial = 1; //works for values upto 12!  (for large values use long long datatype and %lld format specifier )
   for (int i = 1; i <= num; i++)
   {
      factorial = factorial * i;
   }
   printf("%d! = %d", num, factorial);

   return 0;
}
