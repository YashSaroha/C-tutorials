#include<stdio.h>
int fact(int n);
int main()
{
    int no,factorial;
    printf("enter the number whose factorial you want : ");
    scanf("%d",&no);
    factorial = fact(no);
    printf("factorial of %d is : %d",no,factorial);

}

int fact(int n)
{
    int i,f=1;
    for( i=1 ; i<=n ; i++)
    {
        f = f * i;
    }
    return f;
}

