#include<stdio.h>
arr[100];
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void bubble(int n)
{
    for(int i =0; i < n-1; i++)
    {   int flag=0;
        for(int j = i+1; j<n; j++)
        {

            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag=1;

            }

        }
       if(flag==0)
       {
           break;
       }

    }
    for(int i=0; i < n; i++)
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
    bubble(size);

}
