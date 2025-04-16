


#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("Yeah it's a three digit number.");
    }
    else
    {
        printf(" No it's not three digit number");
    }
    return 0;
}