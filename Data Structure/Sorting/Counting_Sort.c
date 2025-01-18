#include<stdio.h>
void count(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int count[max+1];
    int output[size];
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }
    for(int i=size-1;i>=0;i--)
    {
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        arr[i]=output[i];
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int t;
    printf("Enter the size of array");
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    count(arr,t);
    print(arr,t);
}
