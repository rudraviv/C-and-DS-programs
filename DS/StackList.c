//Stack implementation using array
#include<stdio.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void push();
void pop();
void display();
void main()
{
    int ch;
 do
 {
     printf("\n**************MENU*******************");
     printf("\n1.push\n2.pop\n3.display\n4.Exit\nEnter Choice: ");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
         push();
        break;
     case 2:
         pop();
        break;
     case 3:
         display();
        break;
     case 4:
         exit(0);
        break;
     default:
        printf("Enter Valid Option\n\n");
     }
 }while(ch!=4);
}
push()
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nCan't add number due to Insufficient Memory\n\n");
    }
    else{
        printf("\nEnter a Number: ");
        scanf("%d",&ptr->val);
        if(head==NULL)
        {
           ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
        printf("\nValue added successfully\n\n");
    }
}
void pop()
{
    int i;
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nStack is empty\n\n");
    }
    else
    {
     ptr=head;
     head=head->next;
     free(ptr);
     printf("\nValue popped successfully");
    }
}
void display()
{
      int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr = ptr->next;
        }
    }
}
