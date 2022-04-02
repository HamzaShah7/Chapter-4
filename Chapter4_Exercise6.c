#include<stdio.h>

void main(void)
{
    int Arr[7];
    int count=0;
    for(int i=0;i<7;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&Arr[i]);
        if (Arr[i]>10)
        {
            count++;
        }
    }
    printf("Total number of elements greater than 10 is: %d",count);
}
