#include <stdio.h>
int main()
{
    int n;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i == 1 || j == 6 || j == 1 || i==4)
                printf("* ");

            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}