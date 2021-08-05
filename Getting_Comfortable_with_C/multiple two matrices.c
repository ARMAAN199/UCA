/* C program to multiply two matrices
 *
 *Author - Armaan Jain 1910990432
 *Input - 
  Line 1 - an integer defining size
  Next (size) lines take (size) integers each twice for two arrays

 *Sample Input -
 2
 1 2
 3 4
 1 1
 1 1

 *Sample Output -
 3 3
 7 7

 *Assignment: Assignment 1 - C Foundations
 */


#include <stdio.h>


void Print_Matrix(int, int[][*]);
void Matrix_Multiplication(int size, int arr1[][size], int arr2[][size])
{
    int multiplied_matrix[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            multiplied_matrix[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                /* So that each element of each row of arr1 is multiplies with corresponding column from arr2*/
                multiplied_matrix[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    // Then we print the result
    Print_Matrix(size, multiplied_matrix);
}

/* This function is only for testing input */
void Print_Matrix(int size, int arr[][size])
{
    for(int i=0;i<size;i++)
    {
      for(int j=0;j<size;j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
}
 
int main()
{
   int size;

   //Taking input size of both matrices
   printf("Size = ");
   scanf("%d", &size);
   int arr1[size][size],arr2[size][size];

   //Scanning matrix1
   printf("Matrix1 = ");  
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<size;j++)
      {
        scanf("%d", &arr1[i][j]);
      }
   }

   //Scanning matrix2
   printf("Matrix2 = ");     
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<size;j++)
      {
        scanf("%d", &arr2[i][j]);
      }
   }

   //Passing both the matrices to our function
   Matrix_Multiplication(size, arr1, arr2);
 
    return 0;
}