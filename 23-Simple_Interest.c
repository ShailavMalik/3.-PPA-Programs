#include <stdio.h>

int main()
{
    int principal, rate, years, SI;
    printf("Enter the Principal Amount :");
    scanf("%d", &principal);
    printf("Enter the Rate of Interest :");
    scanf("%d", &rate);
    printf("Enter the number of years :");
    scanf("%d", &years);
    SI = (principal * rate * years) / 100;
printf("Simple Interest on Rs %d at %d%%/annum in %d years is Rs %d",principal,rate,years,SI);

    return 0;
}