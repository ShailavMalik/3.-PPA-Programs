#include <stdio.h>

int main()
{
   int num1=4,num2=9;
   printf("Initially, num1=%d\tnum2=%d\n",num1,num2);
   int temp=num1;
   num1=num2;
   num2=temp;
   printf("After Swap, num1=%d\tnum2=%d",num1,num2);
   
   return 0;
}