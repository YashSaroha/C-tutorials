#include<stdio.h>
#include<conio.h>

int binarySearch(int array[], int size, int element)
{
    int low, mid, high;
    low = 0;
    mid = (low + high)/2;
    high = size-1;

    while( low <= high) {
        if(array[mid] == element) {
              return mid;
        }
        if(array[mid] < element) {
             low = mid + 1;
        }
        else{
              high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // we can use only sorted array for binary search

    int array[] = {1,3,14,15,26,37,68,77};
    int size = sizeof(array)/sizeof(int);
    int element = 26;
    int searchIndex = binarySearch(array, size, element);
    printf("element %d was found at index %d \n", element, searchIndex);
    return 0;
}