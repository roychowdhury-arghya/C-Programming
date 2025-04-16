#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = i - 1; // variable for 3,2,1
        for (int l = 1; l <= n - i; l++) //loop for spaces and its sarbojonin
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) // loop for 1,2,3,, and j<=i triangle er jonno , and j<=n square er jonno
        {
            printf(" %d", j);
        }
        for (int k = 1; k <= i - 1; k++) // loop for 3,2,1
        {
            printf(" %d", a);
            a--;                    //variable decreasing
        }
        printf("\n");
    }
    return 0;
}