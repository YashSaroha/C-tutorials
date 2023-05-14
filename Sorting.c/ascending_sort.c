#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b,i,j;
    printf("enter an array of 10 elements\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<10 ; i++)
    {
        for(int j=i+1 ; j<10 ; j++)
        {
            if(a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }

    printf("after sorting in ascending order\n");
    for(i=0 ; i<10 ; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}