#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
typedef struct Node node;
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
void print()
{
    node*p=tail->next;
    do{
        printf("%d",p->data);
        p=p->next;
    }while(p!=tail->next);

}
int main()
{
    addToEmpty(45);
    addAtBeg(34);
    addAtBeg(67);
    print();
    return 0;
}

