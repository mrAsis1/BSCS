#include <stdio.h>

int main()
{
    int num[] = {7,2,9};
    int n = sizeof(num)/sizeof(num[0]);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(num[j] > num[j+1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d,",num[i]);
    }

    return 0;
}