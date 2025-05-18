#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of Rows and Columns : \n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter all the numbers : \n");
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int rows, rowe , cols , cole, sum =0;
    printf("Now enter the particular Row index from start to end :");
    scanf("%d %d",&rows,&rowe);
    printf("Now enter the particular Column index from start to end :");
    scanf("%d %d",&cols,&cole);
    for(int i=rows;i<=rowe;i++){
        for(int j=cols;j<=cole;j++){
            sum+=arr[i][j];
        }
    }
    printf("The sum is : %d",sum);
    return 0;
}