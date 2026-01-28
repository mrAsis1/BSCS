#include <stdio.h>

int digCount(int x);
void con(int x, int arr[]);
void dispArr(int arr[], int size);
int vert(int arr[], int size);
int isCirc(int arr[], int size, int y);
void rot(int arr[], int size);

int main()
{
    int x = 120, y = 3;
    int size = digCount(x);
    int arr[size];

    con(x, arr);

    if(isCirc(arr, size, y))
        printf("ok");
    else
        printf("not ok");

}

void con(int x, int arr[])
{
    int temp = x;
    int n = digCount(x);

    for(int i = n-1; i >= 0; i--)
    {
        arr[i] = temp % 10;
        temp/=10;
    }
}

int digCount(int x)
{
    int dig = 0;
    while(x > 0)
    {
        dig++;
        x /= 10;
    }
    return dig;
}

void dispArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int vert(int arr[], int size)
{
    int x = 0;
    for(int i = 0; i < size; i++)
        x = x * 10 + arr[i];
    return x;
}

void rot(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 0; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

int isCirc(int arr[], int size, int y)
{
    for(int i = 0; i < size; i++)
    {
        int rotnum = vert(arr, size);
        if(rotnum % y != 0)
            return 0;
        rot(arr, size);
    }
    return 1;
}