#include<stdio.h>
#define size 10
int arr[size];
int r=-1;
int f=-1;
void enqueue(int a)
{
    if(r==size-1)
    {
        printf("Overflow");
    }
    else if(f==-1&&r==-1)
    {
        f=0;
        r=0;
        arr[r]=a;
    }
    else{
        r++;
        arr[r]=a;
    }

}
void dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("Tis queue is empty");
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else{
        f++;
    }

}
void display()
{
    if(f==-1&&r==-1)
    {
        printf("There is no element in this queue");
    }
    else{
        for(int i=f;i<=r;i++)
        {
            printf("%d",arr[i]);
        }
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(5);
    dequeue();
    enqueue(6);
    enqueue(7);
    dequeue();
    display();
}
