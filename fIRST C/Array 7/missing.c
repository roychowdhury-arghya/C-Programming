// #include <stdio.h>
// int main(){
//     int n, k;
//     printf("Enter the size of array : ");
//     scanf("%d", &n);
//     printf("Enter the particular value : ");
//     scanf("%d", &k);
//     int arr[n];
//     int check = 0; //o means the element is not present
//     printf("\nPut all the numbers below you want to calculate -\n");
//     for (int i = 0; i <= n - 1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==k){
//             check = 1;  // 1 means element is present
//             break;  
//         }           
//     }
//     if(check == 0){
//         printf("%d is not present in the array",k);
//     }               
//     else printf("%d is present in the array", k);
//     return 0;       
// }
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n, k;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the particular value : ");
    scanf("%d", &k);
    int arr[n];
    int idx =0;
    bool flag = false ; // false means not present 
    printf("\nPut all the numbers below you want to calculate -\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]==k){
            flag = true;
            idx =i;  // true means
            break;  
                    }           
    }
    if(flag == false){
        printf("%d is not present in the array",k);
    }               
    else printf("%d is present in the array and it's index is %d ", k,idx);
    return 0;       
}