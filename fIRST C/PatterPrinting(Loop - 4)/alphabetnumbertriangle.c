#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }

        else
        {
            for (int j = 1; j <= i; j++)
            {
                 // or we can use d as (a+64), therefore we dont need any int
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int n; // Number of lines in the pattern
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         { // Odd line: print numbers
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("%d ", j);
//             }
//         }
//         else
//         { // Even line: print alphabets
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("%c ", 'A' + j - 1);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }