#include <stdio.h>

int main()
{
   int a;
   float b;
   char ch;
   long long int d;
   unsigned int e;
   char string1[30];
   double f;
    printf("Size of int datatype is %d bytes \n",sizeof(a));
    printf("Size of float datatype is %d bytes\n",sizeof(b));
    printf("Size of char datatype is %d byte\n",sizeof(ch));
    printf("Size of long long int datatype is %d bytes\n",sizeof(d));
    printf("Size of unsigned int datatype is %d bytes\n",sizeof(e));
    printf("Size of array of size 30 is %d bytes\n",sizeof(string1));
    printf("Size of double datatype is %d bytes\n",sizeof(f));

   return 0;
}