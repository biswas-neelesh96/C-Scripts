#include <stdio.h>

 int n;

void multiply(int mat1[][n],int mat2[][n],int mult[][n],int n)
{
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mult[i][j] = 0;
            for (k = 0; k < n; k++)
                mult[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
 
int main()
{
    
    printf("enter size of matrix mat[n][n]:");
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    int i,j;
   
   for(i=0; i<n; i++) {
      for(j=0;j<n;j++) {
         printf("enter value for matrix1[%d][%d]:", i, j);
         scanf("%d", &mat1[i][j]);
      }
   }
   for(i=0; i<n; i++) {
      for(j=0;j<n;j++) {
         printf("enter value for matrix2[%d][%d]:", i, j);
         scanf("%d", &mat2[i][j]);
      }
   }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mat1[i][j]);
        printf("\n");
    }
    
    int mult[n][n];
    multiply(mat1, mat2, mult,n);
 
    printf("multult matrix is \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }
 
    return 0;
}
