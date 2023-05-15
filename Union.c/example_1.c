#include<stdio.h>
#include<conio.h>
#include<string.h>

union ABC {
    int i;
    char str[20];
    float f;
};

int main()
{
    union ABC A;
    printf("memory size occupied by data is : %d",sizeof(A));
    return 0;
}