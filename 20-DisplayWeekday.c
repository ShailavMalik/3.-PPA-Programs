#include <stdio.h>

int main()
{
    int weekday;
start:
    printf("Enter the Weekday :");
    scanf("%d", &weekday);
    switch (weekday)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    Default:
        printf("Enter valid number. \n Try Again.\n");
        goto start;
    }

    return 0;
}