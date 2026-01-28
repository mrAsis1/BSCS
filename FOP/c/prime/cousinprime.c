#include <stdio.h>

int main()
{
    int num = 5, cous = 0, p1, p2;

    for(int i = 2; cous != num; i++)
    {
        int temp = i, ctr = 0;
        for( int j = 1; j <= i; j ++)
        {
            if( temp % j == 0 )
                ctr++;
        }
        
        if( ctr == 2 )
        {
            p1 = i;
            p2 = i + 4;
            ctr = 0;

            for( int k = 1; k <= p2; k++ )
            {
                if( p2 % k == 0)
                    ctr++;                
            }

            if( ctr == 2)
            { 
                printf("%d %d\n", p1, p2);
                cous++;
            }
        } 
    }


    return 0;
}