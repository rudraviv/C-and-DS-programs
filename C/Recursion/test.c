//Reverse of string using recursion.
#include<stdio.h>
void reverse(char *str)
{
    if(*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char a[]="Hello World";
    reverse(a);
    return 0;
}
