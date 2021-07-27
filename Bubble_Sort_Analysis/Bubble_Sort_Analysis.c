/* Analysis of Bubble Sort by running it in different Input Scales
 *
 *Author - Armaan Jain 1910990432
 *Input - (Size of Initial Array) Tested for Value 4000.
 *Assignment: Day2_Coding_Assignment 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <sys/time.h>

void create_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = rand() % size + 1;
    }
}

void create_sorted_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = i;
    }
}

void create_reversed_array(int arr[], int size){
    int i, j=0;
    for(i = size-1; i >=0; i--){
        arr[i] = j;
        j++;
    }
}

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int bubblesort(int arr[], int size){
    struct timeval current_time;
    gettimeofday(&current_time, NULL);
    int start_sec = current_time.tv_sec;
    int start_micro = current_time.tv_usec;
    
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
        if(swapped == 0) break;
        last_unsorted_index--;
    }
    gettimeofday(&current_time, NULL);
    int end_sec = current_time.tv_sec;
    int end_micro = current_time.tv_usec;
    return  (end_sec-start_sec == 0) ? (end_micro-start_micro) : (((end_sec-start_sec)*1000000)+(end_micro-start_micro));
}

void printstats(int init_size){
    for(int mode =1;mode<=3;mode++)
    {
        int size = init_size;
        for(int i=1; i<=8; i++)
        {
            int arr[size]; 
            if (mode == 1) {create_array(arr, size);}
            else if (mode == 2) { create_sorted_array(arr,size);}
            else create_reversed_array(arr,size);

            if((mode == 1))         
            {
            printf("random Array of size : %d. takes :%f\n", size, (bubblesort(arr, size)*0.000001));
            }
            else if (mode == 2)
            {
            printf("Sorted Array of size : %d. takes :%f\n", size, (bubblesort(arr, size)*0.000001));
            }
            else
            {
            printf("DESC Array of size : %d. takes :%f\n", size, (bubblesort(arr, size)*0.000001));
            }
            size= size+4000;
        }
    }    
}

int main(){
    int size;
    scanf("%d", &size);
    printstats(size);
    
}