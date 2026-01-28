#include <stdio.h>

int main()
{
    int circ = 0, num = 20, ctr = 0, rev = 0;

    for(int i = 2; circ != num; i++)
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
            rev = 0;
            while(temp > 0)
            {
                rev *= 10;
                rev = temp % 10 + rev;
                temp /= 10;
            } 
            ctr = 0;

            for(int k = 1; k <= rev; k++)
            {
                if(rev % k == 0)
                    ctr++;
            }

            if(ctr == 2)
            {
                printf("%d\n", i);
                circ++;
            }
        }
    }  
    return 0;
}