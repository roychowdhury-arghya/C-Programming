// logic :- 
// first the matrix is transposed and the it has to be reversed row wise.
//Leetode :- 48
//given :-          //output :-
// 1 2 3            // 7 4 1
// 4 5 6            // 9 5 2
// 7 8 9            // 9 6 3
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows / Columns : \n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all the numbers : \n");
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The transpose : \n");
    for(int i =0 ;i<n;i++){
        for (int j=0;j<=i;j++){
            //swap arr[i][j] & arr[j][i]
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
        // now reverse it
        for(int i =0;i<n;i++){
            int j =0;
            int k =n-1;
            while(j<k){
                int temp =arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
                j++;
                k--;
            }
        }
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}