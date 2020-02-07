//pattern4
#include<stdio.h>
void main()
{
    int i,c=0;
    printf("Enter a Number: ");
    scanf("%d",&i);
    for(;i>=0;i--)
    {
        c=i;
        printf("\n");
        for(;;)
        {
            printf("%d ",c);
            if(c==0)
                break;
            c--;
        }
    }
}
