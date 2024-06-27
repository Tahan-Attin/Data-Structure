#include<stdio.h>
void input_arr(int j[],int g)
{
    for(int i=0;i<g;i++)
    {
        scanf("%d",&j[i]);
    }
}
void insertion(int a[],int s,int p ,int v)
{
    for(int i=s-1;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=v;
    for(int i=0;i<=s;i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int n,pos,value;
    printf("enter the size of array");
    scanf("%d",&n);
    int b[n];
    input_arr(b,n);
    printf("Enter the position you want to insert");
    scanf("%d",&pos);
    printf("enter the value");
    scanf("%d",&value);
    insertion(b,n,pos,value);

}
