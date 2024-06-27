#include<stdio.h>
arr[100];
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void insertion(int l,int z)
{
    arr[z]=l;

    for(int i=0;i<=z;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int a,size;
    printf("enter the size of array");
    scanf("%d",&size);
    input_arr( size);
    printf("enter the value of array");
    scanf("%d",&a);
    insertion(a,size);


}
