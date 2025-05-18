//SPIRAL_PRINT
//Leetcode -54
// Input :-
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// Output :-
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
#include <stdio.h>
int main(){
    int m, n;
    printf("Enter number of Row : \n");
    scanf("%d", &m);
    printf("Enter number of Column : \n");
    scanf("%d", &n);
    int arr[m][n];
    printf("Now put all the numbers below one by one - \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int totalcount=m*n;
    int count=0;
    while(count<totalcount){
        //printing the min row
        for(int j=minc;j<=maxc&&count<totalcount;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        //printing the max column
        for(int i=minr;i<=maxr&&count<totalcount;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        //printing the max row (reverese)
        for(int j=maxc;j>=minc&&count<totalcount;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        //printing the min column
        for(int i=maxr;i>=minr&&count<totalcount;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}