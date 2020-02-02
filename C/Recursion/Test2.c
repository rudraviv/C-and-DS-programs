//Recursion Representation
#include<stdio.h>
int i=0;
void main()
{
    int res,f=5;
    res=fact(f);
    printf("\n\nFactorial of 5 is %d\n\n",res);

}
int fact(int k)
{
    if(k==1)
    {
          printf("\n%d call to fact and value of arg:%d",++i,k);
        return k;
    }
    else
    {
          printf("\n%d call to fact and value of arg:%d",++i,k);
        return k*fact(k-1);
    }


}
