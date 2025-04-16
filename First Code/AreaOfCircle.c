#include <stdio.h>
int main() 
{
    int r; // r is radius & a is area
    printf("Enter radius : ");
    scanf("%d",&r);
    float a= 3.1415 * r * r;
    printf("The Area of the Circle  is : %f",a);
    return 0;
}