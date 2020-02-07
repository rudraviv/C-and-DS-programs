//Read Array Element in Different Function using Global Pointer Declaration.
#include<stdio.h>
int *p,*q;
int call(int);
void main()
{
    int m=0,k[5]={3,8,5,2,5};
    p=k;
    call(5);
    while(m!=5)
    {
        printf("%d ",*q);
        m++;
        q++;
    }
}
int call(int j)
{
    static int m=0,u[5]={5,1,6,0,6};
    q=u;
    while(m!=j)
    {
        printf("%d ",*p);
        m++;
        p++;
    }
    printf("\n");
    return 0;
}
