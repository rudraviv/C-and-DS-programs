//Program for Double Linked List.
#include<stdio.h>
#include<conio.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insert_beginning();
void Display();
void insert_last();
void insert_location();
void delete_beginning();
void delete_last();
void delete_location();
void find();
void main()
{
    int ch=0;
    while(ch!=9)
    {
        printf("\n******MENU*******");
         printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning");
        printf("\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n""");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1:
            insert_beginning();
            break;
            case 2:
            insert_last();
            break;
            case 3:
            insert_location();
            break;
            case 4:
            delete_beginning();
            break;
            case 5:
            delete_last();
            break;
            case 6:
            delete_location();
            break;
            case 7:
            find();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..\n\n");
        }
    }
}
void insert_beginning()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("List is Full\n\n");
    }
    else
    {
        printf("\nEnter a Number: ");
        scanf("%d",&item);
    }
    if(head==NULL)
    {
        ptr->data=item;
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
    }
    else
    {
        ptr->next=head;
        ptr->prev=NULL;
        ptr->data=item;
        head->prev=ptr;
        head=ptr;
    }
    printf("Item Successfully inserted\n\n");
}

void insert_last()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter a number: ");
        scanf("%d",&item);
            if(head==NULL)
            {
                ptr->next=NULL;
                ptr->prev=NULL;
                ptr->data=item;
                head=ptr;
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }

                temp->next=ptr;
                ptr->prev=temp;
                ptr->next=NULL;
                ptr->data=item;
            }
    }
    printf("\nNumber inserted Successfully....\n\n");
}
void insert_location()
{
    struct node *ptr,*temp;
    int loc,item,i;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter a Location to Insert a Number: ");
        scanf("%d",&loc);
        temp=head;
        for(i=1;i<=loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\nNot a Valid Location...Please Try Again\n\n");
                return;
            }
        }
        printf("\nEnter a Number to insert: ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
        temp->next->prev=ptr;
        printf("\nNumber Inserted Successfully\n\n");
    }
}
void delete_beginning()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("List is Empty\n\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("Data Deleted Successfully\n\n");
    }
    else
    {
        ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
        printf("Data Deleted Successfully\n\n");
    }
}
void delete_last()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nList is Empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("Data Deleted Successfully\n\n");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
        printf("\nData deleted Successfully\n\n");
    }

}
void delete_location()
{
    struct node *temp,*ptr;
    int item;
    if(head==NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    printf("\nEnter Data to Delete: ");
    scanf("%d",&item);
    temp=head;
    while(temp->data!=item)
    {
        temp=temp->next;
    }
   // printf("\n%d",temp->data);
    if (temp->next==NULL)
    {
        printf("\nCan't Delete\n\n");
    }
    else if(temp -> next -> next == NULL)
    {
        temp ->next = NULL;
        printf("\nData Deleted\n");
    }
    else
    {
        ptr = temp -> next;
        temp -> next = ptr -> next;
        ptr -> next -> prev = temp;
        free(ptr);
    }
    printf("\nData Deleted Successfully\n\n");
}

void find()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nList is Empty");

    }
    else
    {
        printf("Enter a Number you want to search: ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->data==item)
            {
                printf("\n%d found at %dth Location",item,i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            ptr=ptr->next;
            i++;
        }
        if(flag==1)
        {
            printf("Sorry %d Not Found in List",item);
        }
    }
}

void display()
{
    struct node *ptr;
    printf("\nList Contents are:\n");
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    }

}

