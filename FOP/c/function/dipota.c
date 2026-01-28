#include <stdio.h>

void displayArrayItemsExcludingZero(int arr[], int x);
int collatzCycleCount(int x);
void twoDigitIntegerToCollatzCycle(int arr[], int x);

int main()
{
    int x = 101211;
    int arr[9] = {0};
    
    displayArrayItemsExcludingZero(arr, x);
    twoDigitIntegerToCollatzCycle(arr, x);

}

void displayArrayItemsExcludingZero(int arr[], int x)
{
    int n = 0;
    while(x > 0)
    {
        arr[n] = x % 100;
        n++;
        x /= 100;
    }
    for(int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

void twoDigitIntegerToCollatzCycle(int arr[], int x)
{
    int n = 0;
    while(arr[n] != 0)
    {
        printf("%d ",collatzCycleCount(arr[n]));
        n++;
    }
}

int collatzCycleCount(int x)
{
    int ctr = 0;
    while(x != 1)
    {
        if(x % 2 == 0)
            x /= 2;
        else
            x = x*3 + 1;
        ctr++;
    }
    return ctr;
}


