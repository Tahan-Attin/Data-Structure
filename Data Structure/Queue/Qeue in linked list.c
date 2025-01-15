#include <stdio.h>
#include <stdlib.h>
struct Node {
    int info;
    struct Node *link;
} *front = NULL, *rear = NULL;
typedef struct Node node;
void enqueue(int item) {
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Overflow\n");
    } else {
        new_node->info = item;
        new_node->link = NULL;
        if (rear == NULL) {
            front = rear = new_node;
        } else {
            rear->link = new_node;
            rear = new_node;
        }
    }
}
void dequeue() {
    if (front == NULL) {
        printf("Underflow\n");
    } else {
        node *temp = front;
        front = front->link;
        if (front == NULL) {
            rear = NULL;
        }
        free(temp);
    }
}
void display() {
    node *ptr = front;
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        while (ptr != NULL) {
            printf("%d ", ptr->info);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
int main() {
    enqueue(4);
    enqueue(5);
    enqueue(7);
    dequeue();
    enqueue(9);
    display();

    return 0;
}

