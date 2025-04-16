#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n, k;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the particular value : ");
    scanf("%d", &k);
    int arr[n];
    printf("\nPut all the numbers below you want to calculate -\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (k > n)
        k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}