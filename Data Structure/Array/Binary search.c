#include<stdio.h>
int arr[100];
void input(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
 int binary_sarch(int size, int e)
{
    int l=0,r=size-1,i;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==e)
        {
            return mid;
        }
        if(arr[mid]<e)
        {
            l=mid+1;
        }
        if(arr[mid]>e)
        {
            r=mid-1;
        }

    }
}
int main()
{
    int size,e;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("enter the value you want to find");
    scanf("%d",&e);
    printf("enter the element of array");
    input(size);
    int k=binary_sarch(size,e);
    printf("\n");
    printf("the value is in the index %d",k);
}
