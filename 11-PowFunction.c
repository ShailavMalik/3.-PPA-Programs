#include <stdio.h>
#include <math.h>
int main()
{
    double X, Y, sq;
    printf("Enter the value of X: ");
    scanf("%lf", &X);
    printf("Enter the value of Y: ");
    scanf("%lf", &Y);
    sq = pow(X, Y);
    printf("X^Y = %lf^%lf =%lf",X,Y,sq);

    return 0;
}