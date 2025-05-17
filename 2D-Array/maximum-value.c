#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row : \n");
    scanf("%d", &r);
    printf("Enter Column : \n");
    scanf("%d", &c);
    int arr[r][c];
    printf("Now put all the numbers below one by one - \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int maxrow =0, maxcol=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                maxrow =i;
                maxcol=j;
            }
        }
    }
    printf("%d is the maximum.", max);
    printf("And the index is (%d,%d)",maxrow+1,maxcol+1);
    return 0;
}