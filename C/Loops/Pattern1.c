//Pattern 1
#include<stdio.h>
void main()
{
    int x,i,j;
    printf("How many lines stars should be printed?: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
