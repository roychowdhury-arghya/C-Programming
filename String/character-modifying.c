#include <stdio.h>
#include <string.h>
int main(){
    char arr[] ="Arghya";
    arr[2] = 'c';
    int i=0;                        //here g is modifyiied to c
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}