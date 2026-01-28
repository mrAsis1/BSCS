#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int f = 0, acc = 0;

    for( int k = 1; k <= 10000; k++)
    {
        num1 = k;
        f = 0;

        for ( int i = 1; i <= num1/2; i++)
        {
            if( num1 % i == 0)
            {
                f += i;
            }
        }
        num2 = 0;

        for ( int j = 1; j <= f/2; j++)
        {
            if( f % j == 0)
            {
                num2 += j;
            }
        }
        
        if ( num1 == num2 && num1 != f)
        {
            acc += k;
        }
    }
    printf("%d",acc);

    return 0;
}