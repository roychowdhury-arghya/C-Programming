#include <stdio.h>
int main()
{
    int a;
    for (a = 1; a <= 100; a++)
    {
        if (a % 2 == 0)
        {
            printf("%d ", a);
        }
    }
    return 0;
}