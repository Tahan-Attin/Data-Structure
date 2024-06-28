#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
   struct Node*link
}*top=NULL;
typedef  struct Node node;

void push(int item)
{
    node*new_node=malloc(sizeof(node));
    if(new_node==NULL)
    {
        printf("overflow");

    }

    else
    {
        new_node->info=item;
        new_node->link=NULL;
        new_node->link=top;
        top=new_node;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("underflow");
    }
    top=top->link;
}
void display()
{
    node*ptr;
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d",ptr->info);
        ptr=ptr->link;
    }
}
int main()
{
   push(4);
   push(5);
   push(7);
   pop();
   push(9);
   display();
}
