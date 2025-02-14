#include <stdio.h>
int getMax(int array[],int n)
{
    int max=array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
void countingSort(int array[],int n,int place)
{
    int output[n];
    int count[10]={0};
    for(int i=0; i<n; i++)
    {
        int index=(array[i]/place)%10;
        count[index]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i - 1];
    }
    for (int i=n- 1;i>=0;i--)
    {
        int index=(array[i]/place)%10;
        output[count[index] - 1]=array[i];
        count[index]--;
    }
    for (int i=0;i<n;i++)
    {
        array[i]=output[i];
    }
}
void radixSort(int array[],int n)
{
    int maxElement=getMax(array,n);
    for (int place=1;maxElement/place>0;place*=10)
    {
        countingSort(array,n,place);
    }
}
int main()
{
    int t;
    printf("Enter the size of array");
    scanf("%d",&t);
    int data[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&data[i]);
    }
    radixSort(data,t);
    printf("Sorted array in ascending order:\n");
    for (int i=0;i<t;i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}

