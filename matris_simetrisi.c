#include <stdio.h>
#define x  3

int main(){

    int BN[x][x];
    int B[x][x];
    int BT[x][x];
    int i,j,k=0;

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x ; j++)
        {
            printf("B[%d][%d]= ",(i+1),(j+1));
            scanf ("%d",&B[i][j]);
        }
    }

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x ; j++)
        {
            BT[j][i]=B[i][j];
        }
    }

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x ; j++)
        {
            BN[i][j]=B[i][j]*(-1);
        }
    }

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x ; j++)
        {
            if (BN[i][j]!=BT[i][j])
            {
                k=1;
            }
            
        }
    }

    if (k==1)
    {
        printf("Matris ters simetrik degildir");
    }
    else
    printf("Matris ters simetriktir");
    
    
}