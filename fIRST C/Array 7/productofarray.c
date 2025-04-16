#include <stdio.h>
int main(){
    int arr[5] = {1,4,7,10,4};
    int product = 1;
    for(int i=0 ; i<=4; i++){
        product = product*arr[i];
    }
    printf("%d", product);
    return 0;
}