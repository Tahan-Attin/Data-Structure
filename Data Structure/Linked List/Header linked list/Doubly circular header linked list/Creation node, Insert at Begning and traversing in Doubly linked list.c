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
void addToEmpty(int data)
{
    node *newp=malloc(sizeof(node));
    newp->data=data;
    newp->next=NULL;
    newp->prev=NULL;
    head=newp;
}
void addBeg(int data)
{
    node*temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void traversal()
{
    node*p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    addToEmpty(5);
    addBeg(6);
    addBeg(7);
    addBeg(8);
    traversal();

}

