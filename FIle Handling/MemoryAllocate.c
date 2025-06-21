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
    int*mptr = (int*)malloc(10*sizeof(int));
    printf("%d\n",*mptr);
    printf("%d\n",mptr);
    // free(mptr);
    int*cptr = (int*)calloc(50000000,sizeof(int));
    printf("%d\n",*cptr);
    printf("%d\n",cptr);
    // free(cptr);
    // ptr++;
    // *ptr++;
    // printf("%d\n",*ptr);
    // printf("%d\n",ptr);
    return 0;
}