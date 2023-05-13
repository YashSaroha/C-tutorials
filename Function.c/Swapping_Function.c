// #include<stdio.h>

// int swapping(int x, int y);             // declaration

// int main()
// {
//     int a,b;
//     printf("enter value of a : ");
//     scanf("%d",&a);
//     printf("enter value of b : ");
//     scanf("%d",&b);
//     swapping(a,b);                      // calling
//     return 0;
// }

// int swapping(int x, int y)              // definition
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("new values are\n");
//     printf("a : %d   b : %d",x,y);
// }

#include<stdio.h>
void cbr(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
int main()
{
    int x,y;
    printf("Enter 2 numbers a and b :\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping\na=%d and b=%d\n",x,y);

    cbr(&x, &y);
    printf("After swapping\na=%d and b=%d\n",x,y);

    return 0;
}