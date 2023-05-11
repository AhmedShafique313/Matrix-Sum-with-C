#include <stdio.h>
int main () {
    int matrix[2][3];
    int i, j;
    for (i=0; i<2; i++) {
       for (j=0; j<3; j++) {
         printf("Enter the value for display a matrix[%d][%d]:", i, j);
         scanf("%d", &matrix[i][j]);
      }
  }
    printf("2-Dimentional Array elements are:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
           printf("%d", matrix[i][j]);
           if (j=2) {
            printf("\n");
           }
      }
  }
  return 0;
}