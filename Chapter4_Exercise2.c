#include<stdio.h>

void main(void)
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int mul = 1;
    for (int i=1;i<=b;i++)
    {
        mul = mul*a;
    }
    printf("The value of %d^%d = %d.",a,b,mul);
}
