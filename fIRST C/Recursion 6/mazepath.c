#include <stdio.h>
int maze( int cr , int cc ,int er , int ec){    //cr/cc = current row current column 
    int rightways =0;                           //er/ec = ending row ending column
    int downways =0;
    if (cr == er && cc == ec ) return 1;
    if (cr == er ) {
        rightways += maze(cr ,cc+1 ,er , ec);
    }
    if ( cc == ec){
        downways += maze(cr + 1 ,cc ,er , ec);
    }
    if( cr<er && cc<ec){
        rightways += maze(cr ,cc+1 ,er , ec);
        downways += maze(cr+1 ,cc ,er , ec);
    }
    int totalways = rightways + downways; 
    return totalways;          
}
int main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns :");
    scanf("%d",&m);
    int Noofways = maze (1,1,n,m); 
    printf("%d", Noofways);
    return 0;
}