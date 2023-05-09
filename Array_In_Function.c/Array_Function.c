////////////////////////   PASSING  ARRAY  TO  FUNCTION   /////////////////////////


#include<stdio.h>
#include<conio.h>

// void display( char ch)
// {
//     printf("%c ",ch);
// }
// int main()
// {
//     int arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
//     for ( int x=0 ; x<10 ; x++ )
//     {
//         display (arr[x]);
//     }
//     return 0;
// }


/////////////////////////////////   arr = &arr[0]   /////////////////////////////////
/////////////     it means arr is eq to address of array of 0th element i.e 'a'   ////////////////


// void myfunc( int *var1 , int var2 )
// {
//     for ( int x=0; x<var2 ; x++ )
//     {
//         printf("Value of var_arr[%d] is %d\n",x,*var1);
//         var1++;
//     }
// }
// int main()
// {
//     int var_arr[] = { 1,2,3,4,5,6,7 };          // instead of 7 we can also write sizeof(var_arr) while calling the function
//     myfunc (var_arr , 7);                       // var_arr can also be written as &var_arr[0]   This is the address of first element of array
//     return 0;                                   // and if we have address of first element of array then we can fetch all elements of the array
// }                                               // we have passed address of element in function so that's why took pointer variable in function declaration



//////////////////   PASSING AND PRINTING ARRAY  /////////////////////////


// int disp(int x)
// {
//     printf("consecutive value of array is : %d\n",x);
// }
// int main()
// {
//     int arr[10];
//     printf("enter an array of 10 elements\n");
//     for( int i=0 ; i<10 ; i++ )
//     {
//         scanf("%d",&arr[i]);
//     }
//     for( int j=0 ; j<10 ; j++ )
//     {
//         disp(arr[j]);
//     }
//     return 0;
// }


////////////////////  SUM OF ARRAY USING FUNCTION  //////////////////////////


// int print()
// {
//     int arr[10];
//     int sum = 0;
//     printf("enter an array of 10 elements : \n");
//     for( int i=0 ; i<10 ; i++ )
//     {
//         scanf("%d",&arr[i]);
//         sum = sum + arr[i];
//     }    
//     printf("%d",sum);
// }
// int main()
// {
//     print();
//     return 0;
// }


/////////////////////   SUM OF ARRAY WITH ARGUMENTS IN THE FUNCTION  //////////////////////////


int print( int *arr , int size )
{
    int sum = 0;
    for( int i=0 ; i<size ; i++ )
    {
        sum = sum + (*arr);
        arr++;
    }    
    printf("%d",sum);
}
int main()
{
    int arr[10];
    printf("enter an array of 10 elements\n");
    for( int x=0 ; x<10 ; x++ )
    {
        scanf("%d",&arr[x]);
    }
    print( arr , 10 );
    return 0;
}