#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", a);
        a = a * (0.5);
    }
    return 0;
}