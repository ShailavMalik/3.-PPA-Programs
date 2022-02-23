#include <stdio.h>

int main()
{
   
    int num1, num2;
    char operator;
    //start:
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);
    printf("Enter the Operator :");    // getchar();
    scanf(" %c", &operator);            // Or whitespace before %c
    
switch(operator)
{
case '*':  //case 1st
printf("%d * %d = %d",num1,num2,num1*num2);
break;
case '/':  //case 2nd
printf("%d / %d = %d",num1,num2,num1/num2);
break;
case '+':  //case 3rd
printf("%d + %d = %d",num1,num2,num1+num2);
break;
case '-':  //case 4th
printf("%d - %d = %d",num1,num2,num1-num2);
break;
case '%':  //case 5th
printf("%d %% %d = %d",num1,num2,num1%num2);
break;
default:   //default case
printf("You have entered invalid operator!");
//goto start;
}
    return 0;
}