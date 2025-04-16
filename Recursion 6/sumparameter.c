// #include<stdio.h>
// void sum(int a){
//     int s=0;
//     for(int i=1;i<=a;i++){
//         s=s+i;
//         printf("%d\n",s);
//     }
//     return;
// }                                           //with loop
// int main(){
//     int n;
//     printf("Enter your number : ");
//     scanf("%d",&n);
//     sum(n);

//     return 0;
// }
// #include<stdio.h>
// void sum(int a, int s){
//     if(a==0){
//         printf("%d",s);
//         return;
//     }
//     sum(a-1,s+a);
//     return;
//     }
//                                            //with function
// int main(){
//     int n;
//     printf("Enter your number : ");
//     scanf("%d",&n);
//     sum(n,0);

//     return 0;
// }
#include<stdio.h>
int sum(int n)
{
    if(n==1||n==0) return n;
    return n*sum(n-1);
}                        
int main(){
    int n;                          //with return type
    printf("Enter your number : ");
    scanf("%d",&n);
    int par = sum(n);
    printf("%d", par);
    return 0;
}
