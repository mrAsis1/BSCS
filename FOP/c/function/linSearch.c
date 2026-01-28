#include <stdio.h>

int linSearch(int x);

int main()
{
    int x = 5;
    
    printf("%d", linSearch( x));
    return 0;
}

int linSearch(int x)
{
    int arr[7] = {1,2,3,9,5,4,7};
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == x)
            return i;
            
    }
    return -1;
}