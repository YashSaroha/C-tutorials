#include<stdio.h>
#include<conio.h>
#include<string.h>

union Data {
    int i;
    char str[20];
    float f;
};

int main()
{
    union Data data;

    data.i = 10;
    printf("data.i is : %d\n",data.i);

    data.f = 220.5;
    printf("data.f is : %f\n",data.f);

    strcpy(data.str, "C Programming");
    printf("data.str is : %s\n",data.str);

    return 0;
}    