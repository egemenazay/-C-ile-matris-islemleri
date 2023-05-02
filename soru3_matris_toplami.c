#include <stdio.h>
#define n 2
#define m 3


int main(){

    int  A[n][m];
    int  B[n][m];
    int  T[n][m];
    int  i,j,k;

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < m; j++)
      {
        printf("A[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&A[i][j]);
      }   
    }
    
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < m; j++)
      {
        printf("B[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&B[i][j]);
      }   
    }

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < m; j++)
      {
         T[i][j]=A[i][j]+B[i][j];
      }   
    }

    for ( i = 0; i < n; i++){
      for ( j = 0; j < m; j++){
         printf("%3d",T[i][j]);
      }
     printf("\n");
    }
      
    
}