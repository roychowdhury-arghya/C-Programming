#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
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