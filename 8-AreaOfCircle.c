#include <stdio.h>

int main()
{
    float rds, pi = 3.14, area;
    printf("Enter the radius: ");
    scanf("%f", &rds);
    area=pi*rds*rds;
    printf("Area of circle with radius %f is %f",rds,area);

    return 0;
}