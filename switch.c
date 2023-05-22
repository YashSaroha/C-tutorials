#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1;

    // if(i==0)
    //     printf("zero");
    // else if(i==1)
    //     printf("one");
    // else if(i==2)
    //     printf("two");        

    switch(i)
    {
        case 0:
        printf("zero");
        break;
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
    }

    return 0;
}