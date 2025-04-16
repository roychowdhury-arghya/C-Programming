#include <stdio.h>
int stair(int a)
{   if(a==1) return 1;
    if(a==2) return 2;
    int totalways =stair(a-1) + stair (a-2) ;
    return totalways;
}
int main()
{
    int n;
    printf("Enter your stair's number : ");
    scanf("%d", &n);
    int ways = stair(n);
    if (n <= 0)
        printf("Sorry it's invalid!");
    else
        printf("the number of ways are : %d", ways);
    return 0;
}