// #include <stdio.h>
// #define PI 3.1359
// #define area(r) (PI*r*r)
// // float area (float r){
// //     return PI*r*r;
// // }
// int main(){
//     printf("%f",area(10));
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 6;
    int *ptr = (int*)malloc(10*sizeof(int));
    int *p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int *t = p;
    for(int i =1;i<=n;i++){
        printf("%d\n",(*p));
        p++;
    }
    return 0;
}