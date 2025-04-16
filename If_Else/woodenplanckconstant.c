#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first wood hight : ");
    scanf("%d", &a);
    printf("Enter the second wood hight : ");
    scanf("%d", &b);
    printf("Enter the third wood hight : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (b > c)
        {
            printf("%d is the smallest",c);
        }
        else
        {
            printf("%d is the smallest",b);
        }
    }
    if (b > c)
    {
        if (c > a)
        {
            printf("%d is the smallest",a);
        }
        else
        {
            printf("%d is the smallest",c);
        }
    }
    if (c > b)
    {
        if (b > a)
        {
            printf("%d is the smallest",a);
        }
        else
        {
            printf("%d is the smallest",b);
        }
    }
    return 0;
    //Sabas! you did it, It was a question asked by Bikram
}