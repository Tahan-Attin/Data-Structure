#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*link;
};
typedef struct Node node;
node*new_node,*header,*head;
void create()
{
    header=malloc(sizeof(node));
    header->data=0;
    header->link=NULL;
    head=header;
}
void counting()
{
    new_node=malloc(sizeof(node));
    printf("enter the data of node");
    scanf("%d",new_node->data);
    new_node->link=head->link;
    head->link=new_node;
    head->data=head->data+1;
}
int main()
{
    create();
    counting();
    counting();
    counting();
    printf("%d",header->data);
}

