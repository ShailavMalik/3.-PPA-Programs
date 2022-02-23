#include <stdio.h>

int main()
{
    int num, sq;
    printf("Enter the number: ");
    scanf("%d", &num);
    sq = num * num;
    printf("Square of %d is %d", num, sq);

    return 0;
}