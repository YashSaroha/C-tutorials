#include<stdio.h>
int main()
{
    /*
        1
        1 2
        1 2 3
        1 2 3 4
    */

    int i,j;
    for( i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}