#include<stdio.h>
#include<conio.h>
#include<string.h>

union Data {
    int i;
    char str[20];
    float f;
};                                                  // union ko stucture ka hi sub part maan skte h

int main()                                          // union me jo higest bit hoti h vo count hoti h. Yha highest 20 h char ki to wo count hogi
{                                                   // agr structure hota to 20+4+2 = 26 bits hoti total. Ab union me 20 bits h to jb hm f print
    union Data data;                                // kraenge to vo i ko overwrite kr dega. Jb str print kraenge to vo f ko overwrite kr dega islie 
                                                    // i or f ka answer galat aayega. Str ki bits use hongi or ye last me print krwa rhe h to str 
    data.i = 10;                                    // ki value print hogi shi se bss.
    data.f = 220.5;
    strcpy(data.str, "C Programming");              //  agr hme sbhi values shi chaiye to vo ho skti h next example se.

    printf("data.i is : %d\n",data.i);
    printf("data.f is : %f\n",data.f);
    printf("data.str is : %s\n",data.str);

    return 0;
}    