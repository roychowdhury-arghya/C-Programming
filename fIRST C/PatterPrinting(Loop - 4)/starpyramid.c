// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int a=1;
    int b=n-1;
    for (int i = 1; i <= n; i++)
    {   for (int k =1; k<=b; k++)         //k<=n-i kore dileo hbe karon upore int b newar dorkar e nai
        {
            printf("  ");
        }
        b--;
        for (int j = 1; j <= a; j++)
        {
            printf(" *");
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}