#include <stdio.h>
#define n 2
#define m 2
#define p 2


int main(){

    int  A[n][m];
    int  B[m][p];
    int  C[n][p];
    int  i,j,k;

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < m; j++)
      {
        printf("A[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&A[i][j]);
      }   
    }
    
    for ( i = 0; i < m; i++)
    {
      for ( j = 0; j < p; j++)
      {
        printf("B[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&B[i][j]);
      }   
    }

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < p; j++)
      {
        C[i][j]=0;
        for ( k = 0; k < m; k++)
        {
           C[i][j]+=A[i][k]*B[k][j];
        }
      }   
    }

     for ( i = 0; i < n; i++){
      for ( j = 0; j < p; j++)
        printf("%3d",C[i][j]);
       printf("\n");
    }
    
}