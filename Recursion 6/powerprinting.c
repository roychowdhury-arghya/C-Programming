#include <stdio.h>
int main(){
    float a,b;
    printf("Enter your base : ");
    scanf("%f",&a);
    printf("Enter your power : ");
    scanf("%f",&b);
    float power =1;
    for(int i=1;i<=b;i++){
        // printf("Your Power is : %d",power);
        power = a*power;
    }
    printf("Your Power is : %f",power);
    return 0;
}