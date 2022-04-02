#include<stdio.h>

void main(void)
{
    int marks[30];
    int Average, sum = 0;
    for (int i=0;i<30;i++){
        printf("Enter the marks of Student %d: ",i+1);
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    Average = sum/30;
    printf("\nThe average marks of the class is: %d\n",Average);
}
