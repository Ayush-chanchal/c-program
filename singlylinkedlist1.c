#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head,*newnode,*temp,*tem;
void main()
{
    system("cls");
    head=0;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nDo you want to enter more data(0,1):");
        scanf("%d",&choice);    
    }
    temp=head;
    while(temp!=0)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    printf("\n deleting the data of the begnining:");
     if(head==NULL)
    {
        printf("List is empty\n");

    }
    else
    {
        head=temp;
        head=head->next;
        free(temp);

    }
    temp=head;
    while(temp!=0)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}