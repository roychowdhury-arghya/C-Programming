// Leetcode - 867
//given :-          //output :-
// 1 2 3            // 1 4
// 4 5 6            // 2 5
//    :)            // 3 6
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
    printf("The transpose : \n");
    for(int i =0 ; i< col;i++){
        for(int j = 0; j<row ; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}