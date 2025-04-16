#include <stdio.h>
int main()
{   
    int a;
    int b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent : ");
    scanf("%d",&b);
    int power = 1;
    for(int i = 1;i<=b;i++){
        power=power*a;
        printf ("%d\n",power);
    }
    // printf ("%d\n",power);
    return 0;
}