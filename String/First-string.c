#include <stdio.h>
#include <string.h>
int main(){
    char str[6] = {'A','R','G','H','Y','A'};
    // int str[6] = {'A','R','G','H','Y','A'};
    printf("%d\n",str[2]);
    printf("%c\n",str[2]);
    printf("%p\n",str[2]);
    printf("%d\n",str[3]);
    printf("%c\n",str[3]);
    printf("%p\n",str[3]);
    int x = (int)str[2];
    printf("%d",x);
    //   \0 is a single null character ,it will not print,it's ASCII value is 0;
    return 0;
}