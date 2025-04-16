#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int sumEven = 0;
    int sumOdd = 0;    
    printf("\nPut all the numbers below you want to calculate -\n");
    for( int i=0;i<=n-1;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0 ; i<=n-1 ; i++){   
        if(i%2==0) sumEven += arr[i];
        else sumOdd += arr[i];
    }
    printf("The difference between Sum of even and sum of odd is %d :",sumEven-sumOdd);
    return 0;
}