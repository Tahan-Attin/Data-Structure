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

void deleted()
{
    node*p=tail->next;
    tail->next=p->next;
    free(p);
}
void print()
{
    node*p=tail->next;
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=tail->next);

}
int main()
{
    addToEmpty(45);
    addAtBeg(34);
    addAtBeg(67);
    addAtBeg(78);
    addAtBeg(97);
    deleted();
    print();
    return 0;
}



