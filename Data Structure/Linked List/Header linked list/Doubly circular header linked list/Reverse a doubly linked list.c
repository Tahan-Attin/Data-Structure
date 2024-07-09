#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;
};
typedef struct Node node;
node*head;
void addToEpty(int data)
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
    head->prev=newp;
    head=newp;
}
void print()
{
    node*p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void reverse()
{
    node*ptr1=head;
    node*ptr2=ptr1->next;
    ptr1->prev=ptr1->next;
    ptr1->next=NULL;
    while(ptr2!=NULL)
    {
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head=ptr1;
}
int main()
{
    addToEpty(5);
    addBeg(6);
    addBeg(7);
    print();
    reverse();
    printf("\n");
    print();
}
