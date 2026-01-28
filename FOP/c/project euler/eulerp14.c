#include <stdio.h>
 
int main()
{
    unsigned long long max = 0, temp, num = 0 , ctr = 0;

    for ( int i = 1000000; i >= 1; i--)
    {
        ctr = 0;
        temp = i;

        while( temp > 1)
        {
            if ( temp % 2 == 0)
            {
                temp = temp / 2;
                ctr++;
            }
            else 
            {
                temp = temp * 3 + 1;
                ctr++;
            }

            if( ctr > max)
            {
                max = ctr;
                num = i;
            }
        }
    }

    printf("%lld",num);

    return 0;
}