#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node*prev;
    int data;
    struct Node*next;
};
typedef struct Node node;
node*head=NULL;
void addToEMpty(int data)
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
void traversal()
{
    node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    addToEMpty(5);
    addToEnd(6);
    addToEnd(7);
    addToEnd(8);
    traversal();

}
