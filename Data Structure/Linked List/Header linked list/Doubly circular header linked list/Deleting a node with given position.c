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
void addBeg(int data)
{
    node*newp=malloc(sizeof(node));
    newp->data=data;
    newp->next=head;
    newp->prev=NULL;
    head->prev=newp;
    head=newp;
}
void traversal()
{
    node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
node*search(int data)
{
    node*ptr=head;
    node*loc=NULL;
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
void deleted(node*loc)
{
    node*ptr1=head;
    node*ptr2=loc->next;
    node*prev=head;
    if(ptr1==loc)
    {
        head=head->next;
    }
    while(prev->next!=loc)
    {
        prev=prev->next;
    }
    prev->next=loc->next;
    ptr2->prev=prev;
}
int main()
{
    addToEmpty(8);
    addBeg(9);
    addBeg(10);
    addBeg(11);
    traversal();
    printf("\n");
    node*loc=search(10);
    if(loc==NULL)
    {
        printf("element not found");
    }
    else{
       deleted(loc);
    }
     traversal();
}

