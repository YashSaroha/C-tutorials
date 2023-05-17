#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("C:/users/user/desktop/my file.txt","a");

    // char *c = fgetc(ptr);
    // printf("the character i read was %c\n",c);

    // c = fgetc(ptr);
    // printf("the character i read was %c\n",c);

    // char arr[50];
    // fgets(arr, 5, ptr);
    // printf("the string i read was %s\n", arr);

    fputc('o', ptr);

    return 0;
}
