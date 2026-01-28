#include <stdio.h>

void conCa(int *arr1, int *arr2, int *arr, int size1, int size2);
void dispArr(int *arr, int size);

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};
    int size1 = sizeof(arr1)/sizeof(*arr1);
    int size2 = sizeof(arr2)/sizeof(*arr2);
    int arr[size1+size2];

    conCa(arr1, arr2, arr, size1, size2);
    dispArr(arr,size1+size2);
}

void conCa(int *arr1, int *arr2, int *arr, int size1, int size2)
{
    int n = 0;

    for(int i = 0; i < size1; i++)
    {
        *(arr+n) = *(arr1+i);
        n++;
    }

    for(int i = 0; i < size2; i++)
    {
        *(arr+n) = *(arr2+i);
        n++;
    }
}

void dispArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(arr+i));
    }
}