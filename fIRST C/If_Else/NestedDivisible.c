#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("The number is divisible by 5 and 3.");
        }
        else
        {
            printf("Sorry, the number is not devisible by 5 and 3");
        }
    }
    else
    {
        printf("Sorry, the number is not devisible by 5 and 3");
    }
    return 0;
}