//Initialization of Array using Function
#include<stdio.h>
int b();
void main()
{
    int a,c[]={b(),b(),b(),b(),b()};
    printf("\nArray elements are: ");
    for(a=0;a<5;a++)
    {
        printf("%d\t",c[a]);
    }
}
b()
{
    static int m,n;
    m++;
    printf("\nEnter a Number d[%d]: ",m);
    scanf("%d",&n);
    return n;
}
