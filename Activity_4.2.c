#include<stdio.h>

void main(void)
{
    for (int i=2;i<=6;i++){
        for (int j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n\n");
    }
}
