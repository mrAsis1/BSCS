#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,2,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    int p = 0, q = s-1;

    while(p <= q)
    {
        if(arr[p] == arr[q])
        {
            p++;
            q--;
        }
    }

    return 0;
}