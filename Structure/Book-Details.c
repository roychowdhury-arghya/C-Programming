#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    struct Book{
        char name[50];
        float price ;
        int noofpage;
    }A,B,C;
    A.price=411.3;
    A.noofpage=300;
    strcpy(A.name,"Makaut");
    B.price=566.3;
    B.noofpage=400;
    strcpy(B.name,"Mamata Banerjee");
    C.price=499.3;
    C.noofpage=670;
    strcpy(C.name,"Narendra Modi");
   // Now for printing;
    printf("The name of the book is :%s\n", A.name);
    printf("Price : %.3f\n",A.price);
    printf("No of pages :%d\n",A.noofpage);
    printf("The name of the book is :%s\n", B.name);
    printf("Price : %.3f\n",B.price);
    printf("No of pages :%d\n",B.noofpage);
    printf("The name of the book is :%s\n", C.name);
    printf("Price : %.3f\n",C.price);
    printf("No of pages :%d\n",C.noofpage);
    return 0;
}