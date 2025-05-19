#include <stdio.h>
int main(){
    // char str[] = {"Hello"};
    // int i =0;
    // while(i<5){
    //     printf("%c", str[i]);
    //     i++;
    // }
    char str[]= {"Hello I'm Arghya Roy Chowdhury\0"}; //using null character.
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
