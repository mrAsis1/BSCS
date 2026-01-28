#include <stdio.h>

int main()
{
    long long num, large, f;
    
    num = 600851475143;
    f = 2;
    large = 0;
    
    while ( num > 1 )
    {
        if ( num % f == 0 )
        {
            large = f;
            num /= f;
            
            while ( num % f == 0 )
            {
                num /= f;
            }
        }
        f++;
    }
    printf("%lld",large);
    return 0;
}