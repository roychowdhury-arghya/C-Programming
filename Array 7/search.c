#include <stdio.h>
int main(){
    int n, k;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the particular value : ");
    scanf("%d", &k);
    int arr[n];
    printf("\nPut all the numbers below you want to calculate -\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]==k){
            printf("%d is present in the array and it's index is %d ",k,i);
            break;  // normaly multiple kthakle jodi prothom index chawa hoy thle ei code tai run korte hbe. 
        }           // jodi question a k repeat hoy tobe break tule dite hobe, 
    }               // jodi question a k onek thake and last er index print korte bole tobe loop ulte dite hobe (i=n-1;i>=0;i--)
    return 0;       // and jodi kono k na thake array te tobe missing question chole asbe jeta ache [ missing.c ] file a.
}