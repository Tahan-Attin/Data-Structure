#include<stdio.h>
int arr[100];
void input_array(int x)
{
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void traverse(int x)
{
    for(int i=0;i<x;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int a;
    printf("Enter the size of array");
    scanf("%d",&a);
    input_array(a);
    printf("The aerray is\n");
    traverse(a);
}
