#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1,r2,d,x;
    printf("enter values of a, b and c\n");
    scanf("%d %d %d",&a,&b,&c);

    d = ((b*b) - (4*a*c));

    if(d<0)
    printf("imaginary roots\n");
    else{
        x = sqrt(d);
        r1 = (-b+x)/(2*a);
        r2 = (-b-x)/(2*a);
        printf("roots are %d and %d",r1,r2); 
    }

    return 0;
}

