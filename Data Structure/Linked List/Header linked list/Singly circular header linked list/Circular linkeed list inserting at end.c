#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*link;
};
typedef struct Node node;
node*tail;
void addToEmpty(int data)
{
    node*temp=malloc(sizeof(node));
    temp->data=data;
    temp->link=temp;
    tail=temp;
}
void addEnd(int data)
{
    node*newp=malloc(sizeof(node));
    newp->data=data;
    newp->link=tail->link;
    tail->link=newp;
    tail=newp;
}
void traversal()
{
    node*p=tail->link;
    do
    {
        printf("%d ",p->data);
        p=p->link;
    }while(p!=tail->link);
}
int main()
{
    addToEmpty(20);
    addEnd(30);
    addEnd(40);
    traversal();
}
