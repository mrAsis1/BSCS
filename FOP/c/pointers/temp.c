#include <stdio.h>

/* void A(int *arr, int size);
void dis(int *arr, int size); */
int secLar(int *arr, int size);

int main()
{
    int arr[] = {1,4,3,10,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    // A(arr, size);
    printf("%d ",secLar(arr,size));
}

/* void A(int *arr, int size)
{

    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                int temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

void dis(int *arr, int size)
{
   for(int i = 0; i < size; i++)
       printf("%d ",*(arr+i));
} */

int secLar(int *arr, int size)
{
    int lar = *arr, sec = 0;

    for(int i = 0; i < size; i++)
    {
        if(lar < *(arr+i))
        {
            sec = lar;
            lar = *(arr+i);
        }
        if(sec < *(arr+i) && lar != *(arr+i))
            sec = *(arr+i);
    }
    return sec;
}
