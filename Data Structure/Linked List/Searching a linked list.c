#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *link;

}*start=NULL;

typedef struct Node node;

node *getNode(int item)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->info=item;
    new_node->link =NULL;

}

void insertFirst(int item)
{
    node *new_node = getNode(item);
    new_node->link = start;
    start = new_node;
}
void traversal()
{

    node *ptr = start ;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr = ptr->link;
    }
}
node *search(int item)
{
    node *ptr = start,*loc =NULL;
    while (ptr!=NULL)
    {
         if(item==ptr->info)
        {
            loc=ptr;
            break;
        }
        else
           ptr =ptr->link;
    }
    return loc;
}
int main()
{
    for(int i=0;i<10;i++)
    {

        insertFirst(i+5);

    }
  traversal();
  node *loc=search(9);
  if(loc==NULL)
    printf(" \n Not Found ");
  else
    printf("\n %d is found at %X ",loc->info,loc);
    return 0;
}
