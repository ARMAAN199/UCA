/* Mth smallest element of array
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 Integer n, then n integers, then m.
 *Assignment: Assignment 8

 */

#include <stdio.h>

void merge(int *arr,int l ,int m ,int r)
{
    int i=l ,j=m+1 ,k=l;
    int temp[r+1];
    while(i<=m && j<=r)
    {
       if(arr[i]<arr[j])
       {
           temp[k++] = arr[i++];
       }
       else
       {
          temp[k++] = arr[j++];
       }
    }

    while(i<=m)
    {
    temp[k++]=arr[i++];
    }

    while(j<=r)
    {
    temp[k++]=arr[j++];
    }

    for(i=l ;i<=r;i++)
    {
        arr[i]=temp[i];
    }
}

void mergeSort(int *arr,int l ,int r)
{
    if(l<r)
    {
     int mid = (l+r)/2;
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,r);
      merge(arr,l,mid,r);
    }
}

int main()
{
   int n,m;
   printf("n? \n");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n ;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&m);

   mergeSort(a,0,n-1);

   printf("%d \n",a[m-1]);
}