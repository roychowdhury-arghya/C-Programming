#include <stdio.h>
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
    int maxcount=0;
    int maxindex= -1;
    for(int i =0;i<row;i++){
        int count=0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count) {
            maxcount =count;
            maxindex=i;
        }
    }
    printf("\n");
    printf("The row is :%d and the sum is :%d",maxindex+1,maxcount);
    return 0;
}