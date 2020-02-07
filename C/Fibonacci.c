//Fibonacci series

#include<stdio.h>
void main()
{
    //First pass demo in comment
    int n1=0,n2=1,n3,i,num;
    printf("\nEnter the number of elements: ");
    scanf("%d",&num);//5
    printf("\n%d %d",n1,n2);//0 1
    for(i=2;i<num;i++)
    {

        n3=n1+n2;//n3=1+1
        printf(" %d",n3);//0 1 2
        n1=n2;//n1=1
        n2=n3;//n2=2
    }
}
