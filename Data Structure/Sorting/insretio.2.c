#include<stdio.h>
int arr[100];
void inputarray(int n)
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
    arr[0]=-10;
    for(i=2;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;

    }
}
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    inputarray(n);
    print(n);
}
