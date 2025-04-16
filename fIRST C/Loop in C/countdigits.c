#include <stdio.h>
int main()
{   int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count = 0;
    //condition should be n!=0 or n>0
    //int ache bolei jodi kono sonkha ke 10 diye vag kori thle seta pichon theke ek kome jabe
    // like int = 19876 hole , 19876/10 = 1987 hbe ( last er 6 ta kete bad jabe)
    while (n!=0){
        n=n/10;
        count++;
    }
    printf("The number of the digit is : %d", count);
    return 0;
}