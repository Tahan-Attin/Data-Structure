#include<stdio.h>
void enqueue();
void dequeue();
void display();
void priority(int data);
int queue[10];
int front,rear;
front =-1;
rear=-1;
void enqueue()
{
    if(rear==9)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter thr element: ");
    int data;
    scanf("%d",&data);
    if(front==-1)
    {
        front=rear=0;
        queue[rear]=data;
        return;
    }
    priority(data);
}
void priority(int data)
{
    if(queue[rear]<data)
    {
        queue[++rear]=data;
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        if(queue[i]>data)
        {
            for(int j=rear+1;j>i;j--)
            {
                queue[j]=queue[j-1];
            }
            queue[i]=data;
            rear++;
            return;
        }
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty");
        return;
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
        return;
    }
    front++;
}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty");
        return;
    }
    for(int i=0;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   dequeue();
   dequeue();
   display();
}
