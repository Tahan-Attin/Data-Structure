#include<stdio.h>
int arr[100];
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void insertion(int k,int l,int s)
{
    for(int i=s-1;i>=k-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k-1]=l;
    for(int k=0;k<=s;k++)
    {
        printf("%d",arr[k]);
    }
}
int main()
{
    int a,b,size;
    printf("enter the size of arry");
    scanf("%d",&size);
    input_arr(size);
    printf("enter the position you want to insert");
    scanf("%d",&a);
    printf("enter the value you want to insert");
    scanf("%d",&b);
    insertion(a,b,size);


}
