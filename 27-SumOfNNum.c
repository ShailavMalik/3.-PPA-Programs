#include <stdio.h>

int main()
{
   int N, num;
   printf("Enter the value of N :");
   scanf("%d", &N);
   int sum = 0;

   for (int i = 1; i <= N; i++)
   {
      printf("Num%d :", i);
      scanf("%d", &num);
      sum = sum + num;
   }
   printf("sum is %d", sum); 

   return 0;
}