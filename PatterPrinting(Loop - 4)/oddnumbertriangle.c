#include <stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=2*n-1;j=j+2){         make square with using formula
    //         printf(" %d",j);
    //     }
    //     printf(" \n");
    // }
    // for(int i=1;i<=n;i++){
    //     int a=1;
    //     for(int j=1;j<=n;j++){                             make square by using extra varaiable a
    //         printf(" %d",a);
    //         a=a+2;
    //     }
    //     printf(" \n");
    // }

    //NOW MAKE TRIANGLE OF ODD NUMBER (with only be posibble by using extra varia bles)
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){                             //make square by using extra varaiable a
            printf(" %d",a);
            a=a+2;
        }
        printf(" \n");
    }
    return 0;
}