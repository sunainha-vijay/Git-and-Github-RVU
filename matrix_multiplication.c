
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int matr1,matc1;
scanf("%d %d",&matr1, &matc1);
int matrix1[matr1][matc1];
for (int i = 0; i < matr1; i++) 
{
    for (int j = 0; j < matc1; j++) 
    {
        scanf("%d", &matrix1[i][j]);
    }
}
int matr2,matc2;
scanf("%d %d",&matr2, &matc2);
int matrix2[matr2][matc2];
for (int i = 0; i < matr2; i++) 
{
    for (int j = 0; j < matc2; j++) 
    {
        scanf("%d", &matrix2[i][j]);
    }
}
if(matc1!=matr2)
{
  printf("-1\n");
  return 0;
}
int matr=matr1;
int matc=matc2;
int matrix[matr][matc];
int adds=0;
int multi=0;

 for (int i = 0; i < matr1; i++) 
 {
        for (int j = 0; j < matc2; j++) 
        {
            matrix[i][j] = 0;
            for (int k = 0; k < matc1; k++) 
            {
               matrix[i][j] += matrix1[i][k] * matrix2[k][j];
               multi++;
               adds++;
            }
            adds--;
        }
}
for (int i = 0; i < matr1; i++) 
{
        for (int j = 0; j < matc2; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
}
printf("%d %d\n",multi,adds);
return 0;
}
