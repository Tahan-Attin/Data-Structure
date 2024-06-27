#include<stdio.h>
int arr[100];
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
void reverse_travers( int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int a;
    int size;
    printf("enter the size");
    scanf("%d",&size);
    input_arr(size);
    output_arr(size);
    reverse_travers(size);
    serch_arr(size,a);
}
