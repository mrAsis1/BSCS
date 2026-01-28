#include <stdio.h>

void conca(int arr1[], int arr2[], int s1, int s2, int arr[]);
void dispArr(int arr[], int size);
void sort(int arr[], int size);

int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,0};
    
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr[s1+s2];

    conca(arr1, arr2, s1, s2, arr);
    dispArr(arr, s1 + s2);
    sort(arr, s1 + s2);
    dispArr(arr, s1 + s2);

    return 0;
}

void conca(int arr1[], int arr2[], int s1, int s2, int arr[])
{
    int n = 0;

    for(int i = 0; i < s1; i++, n++)
        arr[n] = arr1[i];
    
    for(int i = 0; i < s2; i++, n++)
        arr[n] = arr2[i];
}

void dispArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}