#include <stdio.h>
#include <string.h>

int main()
{
    char string1[30];
    printf("Enter the string :");
    gets(string1);
    strlwr(string1);
    printf("%s", string1);

    return 0;
}