#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // int a =1;
    for (int i = 1; i <= n; i++)
    {   
            int a =1;
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c ", a+64);
            a++;
        }
        printf("\n");
    }
    return 0;
}