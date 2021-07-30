// C program to multiply two square matrices.
#include <stdio.h>

void Matrix_Multiplication(int size, int mat1[][size], int mat2[][size], int answer[][size])
{
    int i, j, k;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            answer[i][j] = 0;
            for (k = 0; k < size; k++)
                answer[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
 
int main()
{
   int size;
   scanf("%d", &size);
   int mat1[size][size],mat2[size][size];
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<size;j++)
      {
        scanf("%d", &mat1[i][j]);
      }
   }
   for(int i=0;i<size;i++)
   {
      for(int j=0;j<size;j++)
      {
        scanf("%d", &mat2[i][j]);
      }
   }
 
    int answer[size][size];
    int i, j;
    Matrix_Multiplication(size, mat1, mat2, answer);
    printf("Result matrix is \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++)
            printf("%d ", answer[i][j]);
        printf("\n");
    }
 
    return 0;
}