#include <stdio.h>
int main(){
    float cp,sp;
    // float p=sp-cp;
    // float l=cp-sp;
    printf("Enter the cost price of the product : ");
    scanf("%f",&cp);
    printf("Enter the selling price of the product : ");
    scanf("%f",&sp);
    if(cp<sp){
        printf("Congrats! You made a profit.");
        float p=sp-cp;
        printf("\nThe profit is : %f",p);
    }
    if(cp==sp){
        printf("You didn't earned nor loss.");
    }
    if(cp>sp){
        printf("Sorry! You made a loss.");
        float l=cp-sp;
        printf("\nThe Loss is : %f",l);
    }
    return 0;
}