#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a positive number : ");
    scanf("%d",&n);

    for(i=2 ; i<n ; i++)
    {
        if(n % i == 0){
            printf("number is NOT prime");
            break;
        }
        else{
            printf("number is prime");
            break;
        }
    }
    return 0;
}