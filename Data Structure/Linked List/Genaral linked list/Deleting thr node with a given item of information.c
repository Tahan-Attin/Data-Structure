#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* link;
}*start=NULL;
typedef struct Node node;
void insertFirst(int item) {
    node* new_node=malloc(sizeof(node));
    new_node->data=item;
    new_node->link=start;
    start=new_node;
}
node*search(int item) {
    node*ptr=start;
    while(ptr!=NULL) {
        if (ptr->data==item) {
            return ptr;
        }
        ptr=ptr->link;
    }
    return NULL;
}

void deleteLoc(node*loc) {
    if (start==NULL||loc==NULL) {
        return;
    }
    if(start==loc) {
        start=loc->link;
        free(loc);
        return;
    }
    node*prev=start;
    while(prev->link!=NULL&&prev->link!=loc){
        prev=prev->link;
    }
    if(prev->link==loc) {
        prev->link=loc->link;
        free(loc);
    }
}
void traversal(){
    node*ptr =start;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
int main() {
    insertFirst(50);
    insertFirst(60);
    insertFirst(70);
    insertFirst(80);
    insertFirst(90);

    node*loc=search(60);
    if(loc==NULL) {
        printf("Element not found\n");
    } else {
        deleteLoc(loc);
        traversal();
    }
    return 0;
}
