#include <stdio.h>

//simply adding the number of elements smaller than each element

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++)
    {
       scanf("%d",&arr[i]); 
    }
    int count=0;
    int j=0;
    for(int i=1;i<size;i++)
    {
        int curr=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>curr)
            {
                arr[j+1]=arr[j];
                count++;
            }
        }
        arr[j+1]=curr;
    }
   printf("%d",count);
   return 0;
}
