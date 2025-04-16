// #include <stdio.h>
// void fun (int x[]){
//     x[0] =109;
//     return ;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun (arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }
#include <stdio.h>
int fun (int x){
    x =109;
    return x;
}
int main(){
    int arr={1};
    printf("%d\n",arr);
    fun (arr);
    printf("%d\n",arr);
    return 0;
}