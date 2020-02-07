//Prime Number
#include<stdio.h>
void main()
{
    int i,m,n,flag=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("\nNumber is not prime\n\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("\nNumber is prime\n\n");
}
