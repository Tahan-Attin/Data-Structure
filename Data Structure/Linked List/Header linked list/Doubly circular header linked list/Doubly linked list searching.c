#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;
};
typedef struct Node node;
node*head=NULL;
void addToEmpty(int data)
{
    node*temp=malloc(sizeof(node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    head=temp;
}
void addToEnd(int data)
{
    node*newp=malloc(sizeof(node));
    node*ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    newp->data=data;
    newp->next=NULL;
    ptr->next=newp;
    newp->prev=ptr;
}
node*search(int data)
{
    node*loc=NULL;
    node*ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==data)
        {
            loc=ptr;
            break;
        }
        ptr=ptr->next;
    }
    return loc;
}
int main()
{
    addToEmpty(7);
    addToEnd(8);
    addToEnd(9);
    addToEnd(10);
    addToEnd(11);
    node*p=search(12);
    if(p==NULL)
    {
        printf("Element not found");
    }
    else
    {
        printf("element find at loc %X",p);
    }
}
