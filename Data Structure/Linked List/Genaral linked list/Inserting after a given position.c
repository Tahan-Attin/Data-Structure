#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*link;
}*start=NULL;
typedef struct Node node;
node*getNode(int item)
{
    node*new_node=malloc(sizeof(node));
    new_node->data=item;
    new_node->link=NULL;
}
void insertFirst(int item)
{
    node*new_node=getNode(item);
    new_node->link=start;
    start=new_node;
}
node*search(int item)
{
    node* loc=NULL;
    node* ptr=start;
    while(ptr!=NULL)
    {
        if(item==ptr->data)
        {
            loc=ptr;
            return loc;
            break;
        }
        ptr=ptr->link;

    }
}
node*insertLoc(node*loc,int item)
{
    node*new_node=getNode(item);
    new_node->link=loc->link;
    loc->link=new_node;
}
void traversal()
{
    node*ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
    if(search(30)==NULL)
    {
        printf("element not found");
    }
    else{
        insertLoc(search(30),60);
        traversal();
    }
}
