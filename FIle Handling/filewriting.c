#include <stdio.h>
int main(){
    FILE*ptr = fopen("arghya.txt","w");
    char str[100];
    gets(str);
    fputs(str,ptr);
    fclose(ptr);
    return 0;


    FILE*ptr = fopen("arghya.txt","r");
    char str[100];
    if(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }
    return 0;


}