//Interchanging Array Elements
#include<stdio.h>
void change(int*,int*);
void main()
{
    int arr1[]={10,30,50,70};
    int arr2[]={20,40,60,80};
    int i;
    printf("Before Swapping, Array Contents are:\n");
    for(i=0;i<4;i++)
    {
        printf("%d  %d\n",arr1[i],arr2[i]);
    }
    for(i=0;i<4;i++)
    {
        change(&arr1[i],&arr2[i]);
    }
    printf("\n\nAfter Swapping: \n");
    for(i=0;i<4;i++)
    {
        printf("%d  %d\n",arr1[i],arr2[i]);
    }
}
void change(int *arr1,int *arr2)
{
    *arr1=*arr1+*arr2;
    *arr2=*arr1-*arr2;
    *arr1=*arr1-*arr2;
}
