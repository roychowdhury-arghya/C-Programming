// Rules for matrix multipliaction :-
// a[m][n] * b[p][q] = res[m][q]
// 1 - n==p;
// 2 - resultant order is m*q;
// 3 - A*B != B*A;
// :)                     Now lets try **with taking input**

#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter the number of rows and columns of first matrix : \n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of first matrix :\n");
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix : \n");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("Enter the elements of second matrix :\n");
    for(int i=0;i<p;i++){
        for(int j =0;j<q;j++){
            scanf("%d", &b[i][j]);
        }
    }
    if(n!=p){
        printf("Sorry! The matrix can't be multiplied");
    }
    else{
        //code for multiply.
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //i is the row of a and j is the column of b;
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                } 
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}