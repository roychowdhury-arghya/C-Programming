#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int sum = 0; 
    if(n==1) sum=0;
    else sum=1;
    printf("The fabonacci numbers are :-\n");
    // if (n == 1)
    // {
    //     printf("%d ", a);
    // }
    // else
    // {
    //     printf("%d %d ", a, b);
    // }
    // int sum = a + b;
    for (int i = 1; i <= n-2 ; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        // printf("%d ", sum);
    }
    printf("%d ", sum);
    return 0;
}