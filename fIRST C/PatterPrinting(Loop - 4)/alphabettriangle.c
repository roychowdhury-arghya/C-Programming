#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {   int d=a+64;
            char ch =(char)d;       //or we can use d as (a+64), therefore we dont need any int
            printf(" %c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter your number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
        
//         for (int j = 1; j <= i; j++)
//         {   
//             printf(" *");
            
//         }
//         printf("\n");
//     }
//     return 0;
// }