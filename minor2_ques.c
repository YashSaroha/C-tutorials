#include<stdio.h>
void num(int []);         // Here I have declared the function that I have used below
int main()
{
    int a[25],i;
    printf("\n Enter 25 numbers\n");
    for(i=0;i<25;i++)
    scanf("%d",&a[i]);

    num(a);               // Here I have called the function. This is called function calling
    return 0;
}
void num (int a[])        // Here I have defined the function. This is called function definition
{
    int i,n1=0,n2=0,n3=0,n4=0;
    for(i=0;i<25;i++)
    {
        if(a[i]>0)          // This is to check positive number
          n1++;
        else if(a[i]<0)     // This is to check negative number
          n2++;
        
    {
        if(a[i]%2==0)       // This is to check even number
            n3++;
        else if(a[i]%2==1)  // This is to check odd number
            n4++;
    }   
    }
    printf("\npositive = %d\nNegative = %d\neven = %d\nodd = %d",n1,n2,n3,n4);
}