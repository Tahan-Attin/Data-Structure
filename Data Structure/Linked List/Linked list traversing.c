#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;

};
void insertion(struct node*head,int data)
{
    struct node*ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

}
void print(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
int main()
{
   struct node*head;
   head=malloc(sizeof(struct node));
   head->data=3;
   head->link=NULL;
    struct node*current=malloc(sizeof(struct node));
    current->data=45;
    head->link=current;
    current=malloc(sizeof(struct node));
    current->data=98;
    head->link->link=current;
    current=malloc(sizeof(struct node));
    current->data=67;
    head->link->link->link=current;
    head->link->link->link->link=NULL;
    insertion(head,69);
    print(head);

}
