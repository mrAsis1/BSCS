#include <stdio.h>

int main()
{
    int num = 200, prime = 0;

    for(int i = 2; prime != num-1; i++)
    {
        int temp = i, ctr = 0;
        for( int j = 1; j <= i; j ++)
        {
            if( temp % j == 0 )
                ctr++;
        }
        
        if( ctr == 2 );
        {
            printf("%d\n",i);
            prime++;
        }
    }
    return 0;
}

