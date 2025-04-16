#include <stdio.h>
int main()
{
   float x ;
   printf("Enter a decimal number : ");
   scanf("%f",&x);
   int y = x;
   printf("Your integer part is : %d\n",y);
   float z = x - y;
   printf("your fractional part of the number is : %f\nThank you ! use me again.",z);
    return 0;
}