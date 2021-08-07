/* Scans an array of size Max(100) And reverses its elements using a function
 *
 *Author - Armaan Jain 1910990432
 *Input - N representing Size Followed bt N integers
 *Assignment: Assignment 1 - C Foundations

 */

#include <stdio.h>

void reverse_array (int arr[], int left, int right) {

    int temp;
    while (left < right)
    {
        temp = arr[right];  
        arr[right] = arr[left];
        arr[left] = temp;
        left++;
        right--;
    }  
}   
 
int main()
{
    int size;
    printf("Size of Array ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

	reverse_array(arr, 0, size-1);
    
    for (int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}