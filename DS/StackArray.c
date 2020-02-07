//Stack implementation using Array
#include<stdio.h>
int stack[50];
int i,j,top=-1,num;
void main()
{
    int c;
    printf("\nEnter Number of elements: ");
    scanf("%d",&num);
    do{
        printf("\n**********MENU***********");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&c);
        switch(c)
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
        default:
            printf("Enter Valid Option");
            break;
        }
    }while(c!=4);
}
void push()
{
    int val;
    if(top==num)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter Value: ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("\nValue added successfully\n");
    }

}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
        top=top-1;
}
void display()
{
    printf("Stack Contents are: ");
    for (i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}
