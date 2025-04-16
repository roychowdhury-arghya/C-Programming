#include <stdio.h>
void palindrome(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            printf("\nThe array is not a palindrome ");
            break;
        }
        else
            printf("\nThe array is a palindrome ");
        return;
    }
    // printf("\nThe array is a palindrome ");
    return;
}
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
    palindrome(arr, n);
    return 0;
}