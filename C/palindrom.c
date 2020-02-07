#include<stdio.h>
void main()
{
    int n,sum=0,r,temp;
    printf("Enter the Number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("\nPalindrome\n\n");
    else
    printf("\nNot Palindrome\n\n");
}
