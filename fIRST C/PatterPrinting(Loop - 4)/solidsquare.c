#include <stdio.h>
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}