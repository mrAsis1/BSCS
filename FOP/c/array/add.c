#include <stdio.h>.
#define SIZE 5

int main()
{
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE] = {6,7,8,9,10};
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = arr1[i] + arr2[i];
        printf("%d ",arr[i]);
    }

    return 0;
}