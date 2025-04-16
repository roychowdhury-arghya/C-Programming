#include <stdio.h>
int main()
{
    int marks[10];
    printf("Just put the marks beside the roll number below -\n");
    for (int i = 0; i <= 9; i++)
    {
        int a = i;
        printf("Enter marksof roll number %d : ", a + 1);
        scanf("%d", &marks[i]);
    }
    printf("The roll number who are failedin exam are below - \n ");
    for (int i = 0; i <= 9; i++)
    {if (marks[i] < 35)
        // printf("%d ", marks[i]);
        printf("%d ", i+1);
    }
    return 0;
}