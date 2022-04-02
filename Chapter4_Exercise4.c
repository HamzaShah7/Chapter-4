#include<stdio.h>

void main(void)
{

    for (int i=1; i<=7; i++)
    {
        int fact=1;
        for (int j=1; j <= i; j++)
        {
            fact = fact * j;
        }
        printf("The Factorial of the number %d is %d\n",i,fact);
    }

}
