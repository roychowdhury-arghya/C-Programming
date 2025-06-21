#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE*ptr = fopen("arghya.txt","r");
    char str[100];
    if(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }
    return 0;
}