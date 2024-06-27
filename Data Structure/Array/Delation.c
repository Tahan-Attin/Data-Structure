#include<stdio.h>
void input_array(int arr[] ,int x)
{
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void delete_array(int n,int p,int arr[])
{
    for(int i=p-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
}
int main()
{
    int n,p,m;
    int arr[100];
    printf("enter the size of array");
    scanf("%d",&n);
    input_array(arr,n);
    printf("enter the position you want to delete");
    scanf("%d",&p);
    delete_array(n,p,arr);


}
