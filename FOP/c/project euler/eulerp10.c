#include <stdio.h>

int main()
{
    long long num = 2000000, f = 0, sum = 0, temp;

    for(int i = 1; i < num; i++)
    {
        temp = i;
        f = 0; 
        for (int j = 1; j <= temp; j++)
        {
            if ( temp % j == 0)
            {
                f++;
            }
        }

        if( f == 2)
        {
            sum += i;
        }
    }
    printf("%lld",sum);
    return 0;
}