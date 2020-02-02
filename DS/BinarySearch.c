//Binary Search
#include<stdio.h>
void main()
{
    int arr[]={90,10,40,5,50,80,30,60,70,100};
    int i,j,temp,num,loc=-1;

    //list sorting
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nEnter the items which you want to search: ");
    scanf("%d",&num);
    loc=binarySearch(arr,0,9,num);
    if(loc!=-1)
    {
        printf("\n%d found at %dth location in array\n\n",num,loc);
    }
    else
        printf("\nSorry Item not found\n\n");
}
int binarySearch(int arr[],int beg,int end,int item)
{
    int mid;
    if(end>=beg)
    {
        mid=(beg+end)/2;
        if(arr[mid]==item)
        {
            return mid+1;
        }
        else if(arr[mid]<item)
        {
            return binarySearch(arr,mid+1,end,item);
        }
        else
        {
            return binarySearch(arr,beg,mid-1,item);
        }
    }
    return -1;
}
