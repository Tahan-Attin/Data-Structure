#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*link;
};
typedef struct Node node;
node*head=NULL,*new_node;
void create()
{
    if(head==NULL)
    {
        new_node=malloc(sizeof(node));
        printf("Enter the first element of node");
        scanf("%d",&new_node->data);
        new_node->link=NULL;
        head=new_node;
    }
}
void insert_end()
{
    node*ptr=head;
   new_node=malloc(sizeof(node));
   printf("enter the element of node");
   scanf("%d",&new_node->data);
   new_node->link=NULL;
   while(ptr->link!=NULL)
   {
       ptr=ptr->link;
   }
   ptr->link=new_node;
}
void traversal()
{
    node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    create();
    insert_end();
    insert_end();
    insert_end();
    insert_end();
    traversal();
}

