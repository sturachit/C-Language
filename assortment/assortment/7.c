#include <stdio.h>

int main() {
    //7)Write C program matrix convert into transpose matrix.
   int matrix[10][10], transpose[10][10];
   int i, j, rows, cols;

   printf("Enter number of rows and columns of matrix: ");
   scanf("%d %d", &rows, &cols);

   printf("Enter elements of matrix:\n");

   for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
         transpose[j][i] = matrix[i][j];
      }
   }

   printf("Transpose of matrix:\n");

   for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {
         printf("%d ", transpose[i][j]);
      }
      printf("\n");
   }

   return 0;
}
