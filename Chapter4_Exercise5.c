#include<stdio.h>

void main(void)
{
    int Arr[10];
    int product;
    for (int i=0; i<10; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&Arr[i]);
    }
    product = Arr[0]*Arr[9];
    printf("The product of first and last element is: %d\n", product);
}
