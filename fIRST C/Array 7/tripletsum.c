#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the particular value : ");
    scanf("%d", &x);
    int arr[n];
    int totaltriplets = 0;
    printf("\nPut all the numbers below you want to calculate -\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n - 1; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("The number of total triplet is : %d ", totaltriplets);
    return 0;
}
 