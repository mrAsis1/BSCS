#include <stdio.h>

int main ()
{
    int ctr = 0, ctr1 = 0, temp = 0, sop = 0;

    for ( int j = 1; ctr1 <= 20; j++ )
    {
        ctr = 0;
        for ( int i = 1; i <= j; i++)
        {
            temp = j;
            if (temp % i == 0)
                ctr++;
        }
        
        if ( ctr == 2 )
        {
            sop = 2 * j + 1;
            printf("%d,",sop);
            ctr1++;
        }
    }
    return 0;
}