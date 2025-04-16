#include <stdio.h>
int main(){
    int arr[7]={1,5,3,2,4,5,6};
    for(int i=0;i<=6;i++){
        for(int j =i+1;j<=6;j++){
            if (arr[i] ==arr[j]){
                printf("%d is duplicate in the array",arr[i]);
            }
        }
    }
    return 0;
}