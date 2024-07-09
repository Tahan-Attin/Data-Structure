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
void insert(node*loc,int data)
{
    node*new_node=malloc(sizeof(node));
    node*ptr2=loc->next;
    new_node->data=data;
    new_node->next=loc->next;
    loc->next=new_node;
    new_node->prev=loc;
    ptr2->prev=new_node;
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
       insert(loc,2);
    }
     traversal();
}
