#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*link;
}*start=NULL;
typedef struct Node node;
node*getNode(int item)
{
    node*new_node=(node*)malloc(sizeof(node));
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
    node*ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
for(int i=0;i<10;i++)
    {
        insertFirst(rand()%10);
    }
    traversal();
}
