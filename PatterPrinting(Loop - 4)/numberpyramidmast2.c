#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int b = 1; b <= 2 * n + 1; b++)
    {
        printf("%d ", b);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", a);
            a++;
        }
        nsp += 2;
        nst--;
        printf("\n");
    }
    return 0;
}
