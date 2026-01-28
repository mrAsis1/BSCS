#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int ctr = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            ctr++;
    }
    if(ctr== 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n = 197;
    int ctr = 0;
    int ans = 0;

    for(int i = 100; i <= 500; i++)
    {
        int ctr = 0;
        int c = 0;
        for(int j = 1; j < i/2; j++)
        {
            if(i % j == 0)
                ctr++;
        }

        if(ctr == 1)
        {
            if(isPrime((i % 10)*100 + i/10))
                c++;
            if(isPrime((i%100) * 10 + i/100))
                c++;
        }
        if(c==2)
            printf("%d ", i);
    }
    return 0;
}
