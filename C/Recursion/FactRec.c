//Factorial of a Number using recursion
#include<stdio.h>
void main()
{
    int num,f;
    printf("\nEnter a Number:");
    scanf("%d",&num);
    f=fact(num);
    printf("\nFactorial of %d is %d\n\n",num,f);
}
int fact(int f)
{
    if(f==1)
        return f;
    else
        return f*fact(f-1);
}
