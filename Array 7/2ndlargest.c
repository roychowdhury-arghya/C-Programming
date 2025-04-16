// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("How many numbers you want to check? : \n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Now put all the numbers below one by one - \n");
//     for (int i = 0; i <= n-1 ; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     int smax = arr[0];
//     for (int i = 0; i <= n-1 ; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for (int i = 0; i <= n-1 ; i++)
//     {
//         if (arr[i] != max && smax < arr[i] )
//         {
//             smax = arr[i];
//         }
//     }
//     printf("%d is the second maximum.", smax);
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
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int smax = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]){
            smax =arr[i];
        }
    }
    printf("%d is the second maximum.", smax);
    return 0;
}