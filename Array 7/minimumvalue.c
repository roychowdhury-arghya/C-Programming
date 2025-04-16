#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("How many numbers you want to check? : \n");
    scanf("%d", &n);
    int arr[n];
    printf("Now put all the numbers below one by one - \n");
    int min = INT_MAX;
    for (int i = n-1; i >=0; i--)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n-1; i >=0; i--)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d is the minimum.", min);
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("How many numbers you want to check? : \n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Now put all the numbers below one by one - \n");
//     for (int i = n-1; i >=0 ; i--)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     for (int i = n-1; i >=0 ; i--)
//     {
//         if (max > arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d is the minimum.", max);
//     return 0;
// }