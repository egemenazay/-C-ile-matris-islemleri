#include <stdio.h>
#define n 2
#define m 3


int main(){

    int  A[n][m];
    int  T[n][m];
    int  i,j,r;

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
         T[j][i]=A[i][j];
      }   
    }

    for ( i = 0; i < m; i++){
      for ( j = 0; j < n; j++){
         printf("%3d",T[i][j]);
      }
     printf("\n");
    }
}