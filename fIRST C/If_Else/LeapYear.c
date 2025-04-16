#include <stdio.h>
int main()
{
    int n;
    printf("Enter you year : ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        printf("Yeah, This is an Leap year. ");
    }
    else
    {
        printf("No, This is not a Leap year.\nOK, Thanks for using me!");
    }
    return 0;
}