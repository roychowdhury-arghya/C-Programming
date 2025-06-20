#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    // int a = sizeof(bool);
    // int b = sizeof(char);
    // int c = sizeof(float);
    // int d = sizeof(double);
    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);
    int*ptr = (int*)malloc(10*sizeof(int));
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    int*Ptr = (int*)calloc(10,sizeof(int));
    printf("%d\n",*Ptr);
    printf("%d\n",Ptr);
    // ptr++;
    // *ptr++;
    // printf("%d\n",*ptr);
    // printf("%d\n",ptr);
    return 0;
}