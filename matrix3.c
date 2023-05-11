#include<stdio.h>
   int main(){
           int mat31[10][10], mat32[10][10], mult[10][10];
           int i, j, k;
           printf("\n Enter the First Matrix elements : \n"); 
           for (i = 1; i <= 3; i++){
               for (j = 1; j <= 3; j++){
               scanf("%d", &mat31[i][j]);
               }
           }
           printf("\n Enter the Second Matrix elements : \n"); 
           for (i = 1; i <= 3; i++){
               for (j = 1; j <= 3; j++){
               scanf("%d", &mat32[i][j]);
               }
           }
           printf("\n The First Matrix :  \n\n"); 
           for (i = 1; i <= 3; i++){
               for (j = 1; j <= 3; j++){
               printf("\t %d ", mat31[i][j]);
               }
               printf("\n");
           }
           printf("\n The Second Matrix :  \n\n"); 
           for (i = 1; i <= 3; i++){
              for (j = 1; j <= 3; j++){
              printf("\t %d ", mat32[i][j]);
              }
              printf("\n");
           }
}           