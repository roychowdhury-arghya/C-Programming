#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Yeah, all the three numbers can be the sides of a triangle");
    }
    else
    {
        printf("No, all the three numbers can't form a triangle");
    }
    return 0;
}