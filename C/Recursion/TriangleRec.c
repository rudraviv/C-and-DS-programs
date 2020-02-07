//Triangular number using Recursion
#include<stdio.h>
void main()
{
    int n,t,tri_num(int);
    printf("\nEnter Number: ");
    scanf("%d",&n);
    t=tri_num(n);
    printf("\nTriangular number of %d is %d\n\n",n,t);
}
int tri_num(int m)
{
    int f=0;
    if(m==0)
        return f;
    else
        f=f+m+tri_num(m-1);
    return(f);
}
