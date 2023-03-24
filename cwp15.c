Write a Program to display the diagonal elements in a matrix array and also find the sum of them.
Sample input:
1 4 3
4 2 6
7 1 3
Output:
Diagonal Elements are 1 2 3
Sum of diagonal elements = 6


#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
   int matrix[ROWS][COLS], i, j, sum = 0;
   
   printf("Enter the elements of the matrix:\n");
   for(i = 0; i < ROWS; i++) {
      for(j = 0; j < COLS; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }
   
   printf("\nDiagonal elements are: ");
   for(i = 0; i < ROWS; i++) {
      for(j = 0; j < COLS; j++) {
         if(i == j) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
         }
      }
   }
   
   printf("\nSum of diagonal elements = %d\n", sum);
   
   return 0;
}

