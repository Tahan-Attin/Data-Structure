#include<stdio.h>
int arr[100];
int found;
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}

void sarch_arr(int size,int k)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            //printf("element fouund at index %d",i);
             found=i;
        }

    }
    if(found)
    {
        printf("index is =%d",found);
    }
    else
        printf("not found");
}
int main()
{
    int a;
    int size;
    printf("enter the size");
    scanf("%d",&size);
    input_arr(size);
    output_arr(size);
    printf("\n");
    printf("Enter the element you want to find");
    scanf("%d",&a);
    sarch_arr(size,a);

}
