#include <stdio.h>
int main()
{
    int n;
    printf("Enter your year : ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        printf("Yeah you are right, this is a leap year");
    }
    else
    {
        printf("No sorry ! this is not a leap year");
    }
    printf("\nThanks for using me!");
    // Sabas ! you did it arghya, It was a question from bikram.
    return 0;
}