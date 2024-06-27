#include<stdio.h>
int arr[100];
void input_array(int x)
{
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output_array(int x)
{
    for(int i=0;i<=x;i++)
    {
       printf("%d",arr[i]);
    }
}
void insertion_last(int x,int y)
{
    arr[x]=y;

}
int main()
{
    int n,b;
    printf("enter the size of array");
    scanf("%d",&n);
    input_array(n);
    printf("enter the element you want to insert");
    scanf("%d",&b);
    insertion_last(n,b);
    output_array(n);

}

