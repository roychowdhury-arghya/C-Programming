#include <Stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial = factorial*i;
        printf("The factorial of %d is %d\n", i ,factorial);
    }
    // printf("The factorial is %d", factorial);
    return 0;
}