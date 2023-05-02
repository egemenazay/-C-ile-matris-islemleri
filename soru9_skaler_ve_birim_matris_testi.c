#include <stdio.h>
#define n 3


int main(){

    int  A[n][n];
    int  i,j,test,r=1,s=0,b=0;

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
        test=A[0][0];
         if ((i==j)&&(A[j][j]==test))
        {
            s=1;
        }
        else
            s=0;
         if ((i==j)&&(A[j][j]==1))
        {
            b=1;
        }
        else
            b=0;
      }   
        
    }

    if (r==0)
    {
        printf("Kosgene matrisi degildir");
    }
    else if ((r==1)&&(s==1)&&(b==1))
    {
    printf("Kosegen matrisidir ve skalerdir ve birimdir\n");
    }
    else if ((r==1)&&(s==1)&&(b==0))
    {
    printf("Kosegen matrisidir ve skalerdir ve birim degildir\n");
    }
    else if ((r==1)&&(s==0))
    {
    printf("Kosegen matrisidir ve skaler degildir\n");
    }
}
