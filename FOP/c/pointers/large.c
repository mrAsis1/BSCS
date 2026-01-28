#include <stdio.h>

int lar(int *arr, int size);

int main()
{
    int arr[] = {35,12,21,54,48};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d ", lar(arr, size));
}

int lar(int *arr, int size)
{
    int large = *arr;

    for(int i = 0; i < size; i++)
    {
        if (large < *(arr+i))
            large = *(arr+i);
    }
    return large;
}
