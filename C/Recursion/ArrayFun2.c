//Passing Array Elements to The Function using Pass By Reference
#include<stdio.h>
void main()
{
    void show (int *);
    int num[]={10,11,12,14,100};
    show(num);
}
void show(int *u)
{
    int n=0;
    printf("Array Contents: ");
    while(n!=5)
    {
        printf("%d ",*(u++));
        n++;
    }

}
