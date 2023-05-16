#include<stdio.h>
int main()
{
    int n;
    int a=0;
    int b=1;

    printf("enter the value till which you want fabonacci series : ");
    scanf("%d",&n);

    for( int i=1 ; i<=n ; i++ )
    {
        printf("%d  ",a);
        int c=a+b;
        a=b;
        b=c;
    }

    return 0;
}