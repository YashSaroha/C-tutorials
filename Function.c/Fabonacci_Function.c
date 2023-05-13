#include<stdio.h>
void fabonacci(int);
int main()
{
    int limit;
    printf("enter no. of terms for fabonacci series : ");
    scanf("%d",&limit);
    fabonacci(limit);
    return 0;
}
void fabonacci(int n)
{
    int a=0,b=1,c;
    printf("fabonacci series is : \n");
    printf("%d\n%d\n",a,b);

    for( int i=3 ; i<=n ; i++ )
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}