


                    // incomplete



#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a=i-1;              // variable for a b c
        for (int l = 1; l <= n - i; l++) // loop for spaces and its sarbojonin
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) // loop for a b c,, and j<=i triangle er jonno , and j<=n square er jonno
        {
            char ch = (char) (j+64);
            printf(" %c", ch);
        }
        for (int k = 1; k <= i - 1; k++); // loop for c a b
                 
        {   char ch = (char) (a+64);
            printf(" %c", ch);
            a--; // variable decreasing
        }
        printf("\n");
    }
    return 0;
}