#include<stdio.h>
int main()
{
    int a[10][10] , trans[10][10] , r,c,x,y;
    printf("Enter rows and columns\n");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Enter element a%d%d : ",x+1,y+1);
            scanf("%d", &a[x][y]);
        }
    }

    printf("\nEntered\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("%d",a[x][y]);
        }
        printf("\n");
    }
    return 0;
    
}