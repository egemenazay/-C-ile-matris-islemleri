#include <stdio.h>
#define x 3

int main(){

    int  A[x][x];
    int i,j;

    for ( i = 0; i < x; i++)
    {
      for ( j = 0; j < x; j++)
    {
        printf("A[%d][%d]= ",(i+1),(j+1));
        scanf ("%d",&A[i][j]);
    }   
      
    }

    for ( j = 0; j < x; j++)
    {
        printf("Esas Kosgene elemanlari = %d\n",A[j][j]);
    }
    
    
}