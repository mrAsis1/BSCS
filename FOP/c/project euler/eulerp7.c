#include <stdio.h>

int main()
{
    int num = 10001, f = 0, ctr = 0 ,j, m;

    for( j = 2; num != ctr; j++)
    {
        int temp = j;
        f = 0;
        for( int i = 1; i <= temp; i++ )
        {
            if( temp % i == 0 )
            {
                f++;
            }
        }

        if( f == 2 )
        {
            ctr++;
            m = j;
        }
    }
    printf("%d",m);
    return 0;
}