#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("the number is prime\n"); // if(n==1) printf("1 is neither prime nor composite");
    else
        printf("No this number is composite\n"); // else if(a==0) printf("the number is prime\n");
    return 0;                                    // else  printf("No this number is composite\n")
} //    return 0;
// }