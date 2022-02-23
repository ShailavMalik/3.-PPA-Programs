#include <stdio.h>

int main()
{

   int numbers[30];
   int N;
   printf("Enter the number of digits you are going to enter :");
   scanf("%d", &N);
   static int sum;
   for(int i=1;i<=N;i++)
   {
      printf("num%d :",i);
      scanf("%d",&numbers[i]);
      sum=sum+numbers[i];
   }
   printf("sum is %d",sum);

   return 0;
}