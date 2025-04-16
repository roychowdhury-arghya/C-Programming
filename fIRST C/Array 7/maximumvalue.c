// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     printf("How many numbers you want to check? : \n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Now put all the numbers below one by one - \n");
//     int max = INT_MIN;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d is the maximum.", max);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to check? : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Now put all the numbers below one by one - \n");
    for (int i = 0; i <= n-1 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i <= n-1 ; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d is the maximum.", max);
    return 0;
}