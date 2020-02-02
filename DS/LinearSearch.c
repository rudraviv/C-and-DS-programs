//Program for Linear Search
#include<stdio.h>
void main()
{
    int arr[]={10,80,30,45,10,60,90};
    int flag=0,i,num,pos;
    printf("\nEnter a number you want to search: ");
    scanf("%d",&num);
    for(i=0;i<7;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            pos=i+1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("\n%d found at %dth location in an array.\n\n",num,pos);
    }
    else
    {
        printf("\nSorry number not found.\n\n");
    }
}
