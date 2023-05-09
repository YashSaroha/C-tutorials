#include<stdio.h>
int main()
{
    /*
        1 2 3 4
        2 3 4 1
        3 4 1 2
        4 1 2 3
    */

    int i,j,k;
    for( i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<=4 ; j++)
        {
            k = i + j - 1;
            if ( k>4 )
            k = k-4 ;
            printf("%d ",k);
        }
        printf("\n");
    }
    
    return 0;
}