#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int r = 0; 
    int original = n;// r = reverese
    // int ld = 0;         //ld = lastdigit
    while (n != 0)
    {
        r = r * 10;
        r = r + (n % 10);
        // ld = n % 10;
        // r = r *10;
        n = n / 10;
    }
    int sum = original +r;
    printf("The reverse number is : %d", sum);
    return 0;
}