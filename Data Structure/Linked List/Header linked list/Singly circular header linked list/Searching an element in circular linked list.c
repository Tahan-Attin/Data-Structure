#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
typedef struct Node node;
int index=0;
node*tail,*temp,*newp;
void addToEmpty(int data)
{
    node*temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=temp;
    tail=temp;
}
void addAtBeg(int data)
{
    node*newp=malloc(sizeof(node));
    newp->data=data;
    newp->next=tail->next;
    tail->next=newp;
}
node* search(int item)
{
    node*p=NULL;
    node*q=tail->next;
    do
    {
        if(q->data==item)
        {
            p=q;
            break;
        }
        q=q->next;
        index++;
    }while(q!=tail->next);
    return p;
}
int main()
{
    addToEmpty(45);
    addAtBeg(34);
    addAtBeg(67);
    node*l=search(45);
    if(l==NULL)
    {
        printf("not found");
    }
    else{
        printf("the element found at index %X",l);
    }
    return 0;
}


