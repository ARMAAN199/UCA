/* Scans an array of unknown size. Max(100) And reverses its elements using a function
 *
 *Author - Armaan Jain 1910990432
 *Input - 1 String
 *Assignment: Assignment 1 - C Foundations

 */

#include <stdio.h>
#include <stdlib.h>

void Reverse_Array(int arr[], int left, int right)
{
    int temp;
    while (left < right)
    {
    temp = arr[left];  
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
    }  
}    
 
int main()
{
    int input,arr[100],size=0;
	while(scanf("%d",&input)==1)
	{
        arr[size++]=input;
    }    
    int n = size;
    
    Reverse_Array(arr, 0, n-1);
    
    printf("Reversed array is \n");
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  
    return 0;
}