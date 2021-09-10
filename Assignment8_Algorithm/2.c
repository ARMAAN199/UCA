/* Mth smallest element of array
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 Integer n, then n integers, then m.
 *Assignment: Assignment 8

 */

#include <stdio.h>

/* Uses Bubble Sort Algorithm  and returns the time taken for the entire array to sort.*/
int bubblesort(int arr[], int size){
    struct timeval current_time;

    /* Getting a timstamp before the sorting process begins */
    gettimeofday(&current_time, NULL);
    int start_sec = current_time.tv_sec;
    int start_micro = current_time.tv_usec;

    /* Last unsorted index is being used to upper bound the inner loop */
    int last_unsorted_index = size-1;
    for(int i=0; i<size; i++)
    {
        short swapped = 0;
        for(int j=0; j<last_unsorted_index; j++)
        {
            if(*(arr+j) > *(arr+j+1))
            {
            swap(arr+j, arr+j+1);
            swapped = 1;
            }
        }

        /* If swapped is 0 here. That means the Array is already sorted at this point.*/
        if(swapped == 0) break;
        last_unsorted_index--;
    }

    /* Getting a timstamp after ending the sorting process */
    gettimeofday(&current_time, NULL);
    int end_sec = current_time.tv_sec;
    int end_micro = current_time.tv_usec;
    return  (end_sec-start_sec == 0) ? (end_micro-start_micro) : (((end_sec-start_sec)*1000000)+(end_micro-start_micro));
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

   bubblesort(a,n);

   printf("%d \n",a[m-1]);
}