#include <stdio.h>
int powerlog(int a, int b)
{   if (b==0) return 1;
    // if (b == 1)
    //     return a;
    int x = powerlog(a, b / 2);
    // int recAns = x*x;f
    // return recAns;
    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
} // it is just a simple function,, now lets do it through recursive way
int main()
{
    int a, b;
    printf("Enter your base : ");
    scanf("%d", &a);
    printf("Enter your power : ");
    scanf("%d", &b);
    int p = powerlog(a, b);
    printf("Your output is : %d", p);
    return 0;
}
// that is really very interesting programm. i like it
