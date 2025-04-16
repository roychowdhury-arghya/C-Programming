#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the particular value : ");
    scanf("%d", &x);
    int arr[n];
    int totalpairs = 0;
    printf("\nPut all the numbers below you want to calculate -\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("The number of total pair is : %d ", totalpairs);
    return 0;
}