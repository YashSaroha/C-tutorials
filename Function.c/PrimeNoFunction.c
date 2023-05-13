#include<stdio.h>

void checkPrimeNumber();        // declaration

int main()
{
    void checkPrimeNumber();        // calling
    return 0;
}

void checkPrimeNumber()         // definition
{
    int n,i,result=0;
    printf("enter a positive number : ");
    scanf("%d",&n);

    for( i=2 ; i*i<=n ; i++)
    {
        if( n % i == 0){
            result=1;
        }
    }
    if( result == 1 ){
        printf("number is not prime");
    }else{
        printf("number is prime");
    }
}