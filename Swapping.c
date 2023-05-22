#include<stdio.h>
int main()
{
    int temp;
    int a=5;
    int b=7;
    printf("a : %d \nb : %d\n",a ,b);

    temp=a;
    a=b;
    b=temp;
    printf("new values are\n");
    printf("a : %d \nb : %d", a, b);



// **************************************************************************************


    // int a=5;
    // int b=7;
    // printf("a : %d\nb : %d\n",a,b);

    // a=a+b;          // a = 5+7  = 12
    // b=a-b;          // b = 12-7 = 5
    // a=a-b;          // a = 12-5 = 7
    // printf("new values are\n");
    // printf("a : %d\nb : %d",a,b);


// ***************************************************************************************


    // int a=5;
    // int b=6;
    // printf("a : %d\nb : %d\n",a,b);

    // a=a^b;          // a = 101 ^ 110 = 011 (3)
    // b=a^b;          // b = 011 ^ 110 = 101 (5)
    // a=a^b;          // a = 011 ^ 101 = 110 (6)
    // printf("new values are\n");
    // printf("a : %d\nb : %d",a,b);
    return 0;
}