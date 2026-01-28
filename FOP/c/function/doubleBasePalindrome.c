#include <stdio.h>

int alpha(int num);
void beta(int num, int arr[], int* len);
int gamma(int arr[], int len);
void delta(int arr[], int len);

int main() 
{
    int num = 585;
    int arr[32];
    int len = 0;

    if (alpha(num)) 
    {
        beta(num, arr, &len);
        if (gamma(arr, len)) 
        {
            printf("%d:\n", num);
            delta(arr, len);
        }
    }

    return 0;
}

int alpha(int num) 
{
    int reversed = 0, original = num;
    while (num > 0) 
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

void beta(int num, int arr[], int* len) 
{
    while (num > 0) 
    {
        arr[*len] = num % 2;
        num /= 2;
        (*len)++;
    }
    for (int i = 0; i < *len / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[*len - 1 - i];
        arr[*len - 1 - i] = temp;
    }
}

int gamma(int arr[], int len) 
{
    for (int i = 0; i < len / 2; i++) 
    {
        if (arr[i] != arr[len - 1 - i]) 
        {
            return 0;
        }
    }
    return 1;
}
    
void delta(int arr[], int len) 
{
    for (int i = 0; i < len; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
