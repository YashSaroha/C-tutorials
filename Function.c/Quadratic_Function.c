#include<stdio.h>
#include<conio.h>
#include<math.h>

int roots(int ,int, int);       // declaration / prototype

int main()
{int a,b,c,d,x;
int r1,r2;
printf("\n standard format of quadratic equation is ax^2+bx+c=0 \n");
printf("enter the values of a,b,c in the given format : \n");
scanf("%d %d %d",&a,&b,&c);
d =((b*b)-(4*a*c));
if(d<0)
    printf("roots are imaginary!!");
else
    roots(a,b,c);       // calling
return 0;
}

int roots(int a, int b, int c)      // definition

{int d =((b*b)-(4*a*c));
int x=pow(d,0.5);
int r1=(x-b)/(2*a);
int r2=-(x+b)/(2*a);
printf("THE ROOTS OF THE EQUATION ARE %d AND %d",r1,r2);
}
