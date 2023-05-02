#include <stdio.h>
#define n 3


int main(){

    int  A[n][n];
    int  i,j,r=1;

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n; j++)
      {
        printf("A[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&A[i][j]);
      }   
    }

    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n; j++)
      {

         if ((i!=j)&&(A[i][j]!=0))
        {
            r=0;
        }
        
      }   
    }

    if (r==0)
    {
        printf("Kosgene matrisi degildir");
    }
    else
    printf("Kosegen matrisidir");
    
}