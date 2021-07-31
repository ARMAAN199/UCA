/* Analysis of Selection Sort by running it in different Input Scales
 *
 *Author - Armaan Jain 1910990432
 *Input - (Size of Initial Array) Tested for Value 4000 and 8000.
 *Assignment: Day2_Coding_Assignment 
 */

#include <stdio.h>
#include <stdlib.h> 
#include <sys/time.h>


/* Creates an Array of size (Parameter - int size) with random Values*/
void create_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = rand() % size + 1;
    }
}

/* Creates a Sorted Array of Given size*/
void create_sorted_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = i;
    }
}

/* Creates a Decreasing Array of Given size*/
void create_reversed_array(int arr[], int size){
    int i, j=0;
    for(i = size-1; i >=0; i--){
        arr[i] = j;
        j++;
    }
}


/* Swaps two Values using Pointers*/
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}


/* Uses Selection Sort Algorithm  and returns the time taken for the entire array to sort.*/
int selectionsort(int arr[], int size){
    struct timeval current_time;

    /* Getting a timstamp before the sorting process begins */
    gettimeofday(&current_time, NULL);
    int start_sec = current_time.tv_sec;
    int start_micro = current_time.tv_usec;
    
    /* Initialising Variables. Index Minimum records the index of the new minimum element */
	int i, j, index_minimum;

	/* One by one move boundary of unsorted subarray */
	for (i = 0; i < size-1; i++)
	{
		// Find minimum element and store its index in index_minimum
		index_minimum = i;
		for (j = i+1; j < size; j++)
		if (arr[j] < arr[index_minimum])
			index_minimum = j;

		// Swap the found minimum element with the first element
		swap(&arr[index_minimum], &arr[i]);
	}

    /* Getting a timstamp after ending the sorting process */
    gettimeofday(&current_time, NULL);
    int end_sec = current_time.tv_sec;
    int end_micro = current_time.tv_usec;
    return  (end_sec-start_sec == 0) ? (end_micro-start_micro) : (((end_sec-start_sec)*1000000)+(end_micro-start_micro));
}

void printstats(int init_size){
    /*
    Mode Variable is used to run the code for different array types in one go.
    Mode 1 - Implies Random Array
    Mode 2 - Implies Sorted Array
    Mode 3 - Implies Reversed Array
    */
    for(int mode =1;mode<=3;mode++)
    {
        int size = init_size;
        for(int i=1; i<=8; i++)
        {
            int arr[size]; 
            if (mode == 1) {create_array(arr, size);}
            else if (mode == 2) { create_sorted_array(arr,size);}
            else create_reversed_array(arr,size);

            if(mode == 1)         
            {
            printf("random Array of size : %d. takes :%f\n", size, (selectionsort(arr, size)*0.000001));
            }
            else if (mode == 2)
            {
            printf("Sorted Array of size : %d. takes :%f\n", size, (selectionsort(arr, size)*0.000001));
            }
            else
            {
            printf("DESC Array of size : %d. takes :%f\n", size, (selectionsort(arr, size)*0.000001));
            }
            size= size+4000;
        }
    }    
}

int main(){
    int size;
    scanf("%d", &size);

    //Function call that runs selection sort on all three Modes.
    printstats(size);
    
}