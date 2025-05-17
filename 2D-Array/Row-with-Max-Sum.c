//Question :- Write a C program the print the Row number having the maximum sum in a given matrix?
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of Rows and Columns : \n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int maxsum = 0, rowindex = 0;
    printf("Enter all the numbers : \n");
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        int rowsum=0;
        for(int j=0;j<col;j++){
            rowsum += arr[i][j];
        }
        if(rowsum>maxsum){
            maxsum=rowsum;
            rowindex=i;
        }
    }
    printf("Row %d has the biggest sum of %d",rowindex+1,maxsum);
    return 0;
}