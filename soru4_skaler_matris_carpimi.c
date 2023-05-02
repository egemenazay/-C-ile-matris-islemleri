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

    printf("r= ",r);
    scanf ("%d",&r);

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < m; j++)
      {
         T[i][j]=A[i][j]*r;
      }   
    }

    for ( i = 0; i < n; i++){
      for ( j = 0; j < m; j++){
         printf("%3d",T[i][j]);
      }
     printf("\n");
    }
      
    
}