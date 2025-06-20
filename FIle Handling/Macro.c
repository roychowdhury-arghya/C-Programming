#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define pi 3.1459;
#define area(r) (pi*r*r);
float area (float r){
    return pi*r*r;
}
int main(){
    printf("%f",area(10));
    return 0;
}