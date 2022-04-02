#include<stdio.h>

void main(void)
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    for(int R=a%b;R>0;R=a%b)
    {
        a = b;
        b = R;
    }
    printf("The Greatest Common Divisor (GCD) is: %d\n",b);
}
