#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first integer : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);
    printf("Enter third integer : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest.",a);
    }
    if (b > a && b > c)
    {
        printf("Your second integer is the greatest one.");
    }
    if (c > a && c > b)
    {
        printf("Your third integer is the greatest one.");
    }
    return 0;
}