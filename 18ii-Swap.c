#include <stdio.h>

int main()
{
    int a = 3, b = 18;
    printf("Initially, a=%d\t b=%d\n", a, b);
    a = a + b;
    b=a-b;
    a=a-b;
    printf("After Swap, a=%d\tb=%d",a,b);

    return 0;
}