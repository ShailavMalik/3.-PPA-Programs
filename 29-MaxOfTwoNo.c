#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        printf("%d is maximum", a);
    }
    else
    {
        printf("%d is maximum",b);
    }
}
int main()
{
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("Enter another number :");
    scanf("%d",&y);
max(x,y);

    return 0;
}