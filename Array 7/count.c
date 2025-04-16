#include <stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Now enter the particular number to calculate greater : ");
    scanf("%d",&x);
    int arr[n];    
    printf("\nPut all the numbers below you want to calculate product -\n");
    for( int i=0;i<=n-1;i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0 ; i<=n-1 ; i++){   
        if(arr[i]>x) count++ ;
    }
    printf("There are %d numbers which are greater than %d ",count,x);
    return 0;
}