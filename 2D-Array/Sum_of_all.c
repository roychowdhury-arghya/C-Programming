// Question - Find the sum of the given matrices m*n
//    1 2 3
//    4 5 6  
#include <stdio.h>
int main(){
    int a[2][3],sum =0;
    printf("Enter all the numbers :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("The Sum is :\n%d",sum);
    return 0;
}