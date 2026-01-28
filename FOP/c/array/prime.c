#include <stdio.h>

int main()
{
    int prime[100];
    int num = 100;
    int temp = 0, ctr = 0; 
    int x = 0;

    for(int i = 2; i <= num; i++)
    {
        temp = i;
        ctr = 0;
        for(int j = 1; j <= temp; j++)
        {
            if(temp % j == 0)
                ctr++;
        }

        if(ctr == 2)
        {
            prime[x] = i;
            x++;
        }
    }

    for(int i = 0; i < x; i++)
        printf("%d,",prime[i]);

    return 0;
}