#include <stdio.h>

int main()
{
    int p1 = 0, p2 = 0, ctr = 0, cous = 0;

    for( int i = 2; cous != 5; i++)
    {
        ctr = 0;
        int temp = i;
        for(int j = 1; j <= temp; j++)
        {
            if(temp % j == 0)
                ctr++;
        }
        if(ctr == 2)
        {
            p1 = p2;
            p2 = temp;

            if( p1 != 0 && p2 - p1 == 4)
            {
                printf("%d %d\n", p1, p2);
                cous++;
            }
        }
    }

    return 0;
}