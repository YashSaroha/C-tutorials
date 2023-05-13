#include<stdio.h>

int add(int a, int b);      // declaration, prototype

int main()
{
    int result;
    result = add(1,2);      // calling
    printf("%d",result);
    return 0;
}

int add(int a, int b)       // definition
{
    int c;
    c=a+b;
    return c;
}