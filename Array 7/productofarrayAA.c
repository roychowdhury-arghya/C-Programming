#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];    
    printf("\nPut all the numbers below you want to calculate product -\n");
    int product = 1;
    for(int i=0 ; i<=n-1 ; i++){   
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<=n-1 ; i++){   
        product = product*arr[i];
    }
    printf("The product of all the given numbers is : %d", product);
    return 0;
}