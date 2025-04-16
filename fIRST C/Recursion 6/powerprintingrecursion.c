// #include <stdio.h>
// int power( int a,int b){
//     int x=1;
//     for (int i=1; i<=b ; i++){
//         x=x*a;
//     }
//     return x;
// }                                   //it is just a simple function,, now lets do it through recursive way
// int main(){
//     int a,b;
//     printf("Enter your base : ");
//     scanf("%d",&a);
//     printf("Enter your power : ");
//     scanf("%d",&b);
//     int p =power(a,b);
//     printf("Your output is : %d",p);
//     return 0;
// }
#include <stdio.h>
int power( int a,int b){
    if (b==0) return 1;
    return a*power(a,b-1);
}                                   //it is just a simple function,, now lets do it through recursive way
int main(){
    int a,b;
    printf("Enter your base : ");
    scanf("%d",&a);
    printf("Enter your power : ");
    scanf("%d",&b);
    int p =power(a,b);
    printf("Your output is : %d",p);
    return 0;
}