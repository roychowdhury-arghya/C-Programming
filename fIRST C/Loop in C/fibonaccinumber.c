#include <Stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    printf("The febonacci numbers are :\n");
    for (int i = 1; i <= n-2; i++){
        sum = a + b;
        a=b;
        b = sum;
        // printf("%d\n",sum);
    }
    printf("\n%d",sum);
    return 0;
}