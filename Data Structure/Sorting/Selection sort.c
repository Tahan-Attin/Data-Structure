#include<stdio.h>
void selection(int a[],int n)
{
    int j,i;
    for( i=0;i<n-1;i++)
    {
        int min =i;
        for( j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i){
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        }
    }
}
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("the sorted array is");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}

