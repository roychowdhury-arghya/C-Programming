#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the cordinates : ");
    scanf("%d %d", &x , &y );
    if (x == 0 && y == 0)
    {
        printf("The point is origin");
    }
    else if (x == 0)
    {
        printf("Lies on y-axis");
    }
    else if (y == 0)
    {
        printf("Lies on x-axis");
    }
    else
    {
        printf("the point doesn't lie on x or y axis and it is not origin.");
    }
    return 0;
}