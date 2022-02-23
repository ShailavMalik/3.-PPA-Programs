#include <stdio.h>
#include <math.h>
int main()
{
   float num,root;
   printf("Enter the number: ");
   scanf("%f",&num);
   root=sqrt(num);
   printf("Square root of %f is %f",num,root);
   
   return 0;
}