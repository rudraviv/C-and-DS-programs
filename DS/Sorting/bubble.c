//Bubble Sort
#include<stdio.h>
void main()
{
  int i,j,num,temp;
  int a[50];
  printf("How many elements you want to enter?: ");
  scanf("%d",&num);
  printf("\nEnter %d Elements: ",num);
  for(i=0;i<num;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Ascending Sorting: ");
  for(i=0;i<num;i++)
  {
      for(j=i+1;j<num;j++)
      {
          if(a[j]<a[i])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
  for(i=0;i<num;i++)
  {
      printf("\n\t%d",a[i]);
  }
  printf("\n\nDescending Sorting: ");
  for(i=0;i<num;i++)
  {
      for(j=i+1;j<num;j++)
      {
          if(a[j]>a[i])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
  for(i=0;i<num;i++)
  {
      printf("\n\t%d",a[i]);
  }
}
