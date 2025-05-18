// Wave print
// input :- 
// 1 2 3
// 4 5 6
// 7 8 9
// output :- 1 2 3 6 5 4 7 89
#include <stdio.h>
int main(){
    int r, c;
    printf("Enter number of Row : \n");
    scanf("%d", &r);
    printf("Enter number of Column : \n");
    scanf("%d", &c);
    int arr[r][c];
    printf("Now put all the numbers below one by one - \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}