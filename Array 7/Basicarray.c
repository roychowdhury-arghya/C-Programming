// #include <stdio.h>
// int main(){
//     // int arr[5] = {2,4,8,5,1}; 
//     // arr[4] = 23;
//     // printf("%d",arr[4]);
//     // float a[3] = {2.3,1.5,7.8};
//     // printf("%f",a[2]);
//     // char b[4] = {'a','T','$','o'};
//     // printf("%c", b[0]);
//     return 0;
// }
#include <stdio.h>
int main(){
    // int b;
    // printf("How many numbers you ant to add? :");
    // scanf("%d", b);
    int arr[5];
    for (int i=0; i<=4; i++){
        int a=i;
        printf("\nEnter your element number %d :", a+1);
        scanf("%d", &arr[i]);
    }
    // int n;
    // printf("Enter the number you want to print :");
    // scanf("%d",&n);
    for (int i=0;i<=4;i++){
        printf("%d ", arr[i]);
    }
    return 0;
 }
// int size =10,b[size];
