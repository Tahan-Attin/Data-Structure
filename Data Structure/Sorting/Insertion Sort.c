#include<stdio.h>
int arr[100];
void inputArray(int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void sort(int n)
{
    int i;
    int j;
    int temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    inputArray(a);
    sort(a);
    print(a);
}
