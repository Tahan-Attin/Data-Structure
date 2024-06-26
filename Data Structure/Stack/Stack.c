#include<stdio.h>
#define size 10
int stack [size];
top=-1;
void push()
{
    if(top==size-1)
    {
        printf("overflow");
    }
    else{
        int x;
        top++;
        printf("enter the element you want to insert");
        scanf("%d",&x);
        stack[top]=x;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("tis stake is empty");
    }
    else{
        top--;
    }

}
void display()
{
    if(top==-1)
    {
        printf("tis stack is empty");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d",stack[i]);
        }

    }
}
int main()
{
  push();
  push();
  push();
  push();
  pop();
  pop();
  push();
  display();
}
