// Online C compiler to run C program online
#include <stdio.h>

void cumulSum(int arr[], int s);

int main() {
    int s;
    scanf("%d", &s);
    
    int arr[s];
    for(int i = 0; i < s; i++)
        scanf("%d", &arr[i]);
    
    cumulSum(arr, s);

    return 0;
}

void cumulSum(int arr[], int s)
{
    int sum = 0;
    for(int i = 0; i < s; i++)
    {
        sum += arr[i];
    }
    
    if(sum >= 65 && sum <= 90 || sum >= 97 && sum <= 122)
    {
        if(sum - 96 > 0)
            printf("%d ", sum-96);
        else
            printf("%d ", sum-64);
    }
}