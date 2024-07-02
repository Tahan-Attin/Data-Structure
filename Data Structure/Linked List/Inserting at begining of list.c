#include<stdio.h>
#include<stdlib.h>
struct Node{
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
void traversal()
{
    node*ptr;
    ptr=start;
    while(ptr!=0)
    {
        printf("%d",ptr->data);
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
    traversal();



}
