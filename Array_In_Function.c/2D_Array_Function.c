#include<stdio.h>

void printarr( int array[2][2])
{
    int i,j;
    printf("\n\nNow this will print by using function\n\n");
    for( i=0 ; i<=1 ; i++ )
    {
        for( j=0 ; j<=1 ; j++ )
        {
            printf("values from function are : %d\n",array[i][j]);
        }
    }    
}
int main()
{
    int i,j;
    int arr[2][2];

    printf("enter values : \n");
    for( i=0 ; i<=1 ; i++ )
    {
        for( j=0 ; j<=1 ; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }    

    for( i=0 ; i<=1 ; i++ )
    {
        for( j=0 ; j<=1 ; j++ )
        {
            printf("values are : %d\n",arr[i][j]);
        }
    }    

    printarr(arr);
    return 0;
}