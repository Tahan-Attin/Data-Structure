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
void print()
{
    node*p=tail->next;
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=tail->next);

}
void deleted(node*loc)
{
    node*ptr=tail->next;
    node*prev=tail->next;
    if(ptr==loc)
    {
        tail->next=ptr->next;
        free(ptr);
    }

        while(prev->next!=loc)
        {
            prev=prev->next;
        }
        if(prev->next==loc)
        {
            prev->next=loc->next;
            free(loc);
        }
if (tail == loc) {
        tail = prev;
    }
}
int main()
{
    addToEmpty(45);
    addAtBeg(34);
    addAtBeg(67);
    addAtBeg(25);
    node*l=search(45);
    if(l==NULL)
    {
        printf("not found");
    }
    else{
       deleted(l);
       print();
    }
    return 0;
}



