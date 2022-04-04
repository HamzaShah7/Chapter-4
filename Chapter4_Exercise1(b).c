#include<stdio.h>

void main(void)
{
    char alpha = 'A';
    int add = 0;
    for (int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",alpha+add);
            add++;
        }
        printf("\n");
    }
}
