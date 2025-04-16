#include<stdio.h>
void sum(int a){
    int s=0;
    for(int i=1;i<=a;i++){
        s=s+i;
        printf("%d\n",s);
    }
    return;
}                                           
int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    sum(n);

    return 0;
}