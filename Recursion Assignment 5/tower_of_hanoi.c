/* Analysis of Recursive Selection Sort by running it in different Input Scales
 *
 *Author - Armaan Jain 1910990432
 *Input - (Size of Initial Array) Tested for Value 4000 and 8000.
 *Assignment: Assignment_5_Recusrion 
 */

#include <stdio.h>
#include <stdlib.h> 


/* Creates an Array of size (Parameter - int size) with random Values*/
void visualise_towers(int arr[], int size, int number){
    if(number == 1)
    {
        printf("\nTOWER A\n");
    }
    if(number == 2)
    {
        printf("\nTOWER B\n");
    }
    if(number == 3)
    {
        printf("\nTOWER C\n");
    }

    for(int i=0; i < size; i++)
    {   
        for(int k=0; k < arr[i]; k++)
        {
            printf("# ");
        }    
        printf("\n");     
    }
}

/* Creates a Sorted Array of Given size*/
void create_sorted_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        arr[i] = i+1;
    }
}

void tower_printer(int arr1[], int count1, int arr2[], int count2,int arr3[], int count3)
{
    visualise_towers(arr1, count1, 1);
    visualise_towers(arr2, count2, 2);
    visualise_towers(arr3, count3, 3);
}

void move(int arr1[], int count1, int arr2[], int count2)
{
    for(int i = count2-1; i >= 0; i--)
    {
        arr2[i+1] = arr2[i];
    }
    arr2[0] = arr1[0];
    for(int i = 0; i < count1-1; i++)
    {
        arr1[i] = arr1[i+1];
    }
}

void move_and_print(int arr1[], int *ptr1, int arr2[], int *ptr2, int from, int to)
{
    move(arr1, *ptr1 ,arr2, *ptr2);
    (*ptr1)--;
    (*ptr2)++;

    if(from == 1 && to == 2)
    {
        printf("A TO B\n");
    }
    if(from == 1 && to == 3)
    {
        printf("A TO C\n");
    }
    if(from == 2 && to == 1)
    {
        printf("B TO A\n");
    }
    if(from == 2 && to == 3)
    {
        printf("B TO C\n");
    }
    if(from == 3 && to == 1)
    {
        printf("C TO A\n");
    }
    if(from == 3 && to == 2)
    {
        printf("C TO B\n");
    }       
}

void tower_of_hanoi()

int main(){
    int size;
    scanf("%d", &size);

    int arr1[size];
    create_sorted_array(arr1,size);
    int arr2[size], arr3[size];
    int count1 = size, count2 =0, count3 =0;
    int *ptr1 = &count1, *ptr2 = &count2, *ptr3 = &count3;

    move_and_print(arr1, ptr1 ,arr3, ptr3, 1,3);
    move_and_print(arr1, ptr1 ,arr2, ptr2, 1,2);
    move_and_print(arr3, ptr3 ,arr2, ptr2, 3,2);
    move_and_print(arr1, ptr1 ,arr3, ptr3, 1,3);
    move_and_print(arr2, ptr2 ,arr1, ptr1, 2,1);
    move_and_print(arr2, ptr2 ,arr3, ptr3, 2,3);
    move_and_print(arr1, ptr1 ,arr3, ptr3, 1,3);

    tower_printer(arr1, count1, arr2, count2, arr3, count3);
    
}