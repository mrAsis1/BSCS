#include <stdio.h>

int main()
{
    int num[6] = {5,1,4,2,3,6};

    int n = 6;
    int temp = n;
    for(int i = 0; i < n/2; i++)
    {        
        temp--;
        printf("%d %d\n",num[i] ,num[temp]);
    }

    return 0;
}