#include <stdio.h>
int fibo(int a)
{
    if (a <= 2)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int x = fibo(n);
    if (n <= 0)
        printf("Sorry it's invalid!");
    else
    {
        // printf("%d", fibo(n));
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", fibo(i));
        }
    }
    return 0;
}