#include<stdio.h>

int linearSearch(int array[], int size, int element)
{
    for(int i=0 ; i<size ; i++)
    {
      if(array[i]==element)
        {
             return i;
         }
    }
return -1;
}

int main()
{
    int array[] = {1,3,45,67,28,2,54,89,298};
    int size = sizeof(array)/sizeof(int);
    int element = 45;
    int searchIndex = linearSearch(array, size, element);
    printf("element %d was found at index %d \n", element, searchIndex);
    return 0;
}