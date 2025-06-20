#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    char ch;
    scanf("%c",&ch);
    scanf("%d",&b);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break ;
        case '-':
        printf("%d",a-b);
        break ;
        case '*':
        printf("%d",a*b);
        break ;
        case '/':
        printf("%f",(float)a/b);
        break ;
        default: 
        printf("invalid");
    }
    return 0;
}