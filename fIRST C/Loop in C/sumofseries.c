// // method 1

#include <Stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // for normal series - sum = sum + i;
        // but if like 1-2+3-4+5-6 then -----
        if (i % 2 != 0)
            sum = sum + i;
        else
            sum = sum - i;
    }
    printf("The sum is %d", sum);
    return 0;
}

// // method 2;
// nahole formula baniye nite hbe,,
// jodi even sonkhya hoy tahole , i mean n jodi even number hoy -tobe sum = (-n/2)
// and jodi odd hoy tobe sum = ((-n/2)+n)