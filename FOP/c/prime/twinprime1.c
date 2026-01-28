#include <stdio.h>

int main()
{
    int num = 5, ctr = 0, twin = 0;

    for(int i = 2; twin != 5; i++)
    {
        int temp = i;
        ctr = 0;

        for(int j = 1; j <= temp; j++)
        {
            if( temp % j == 0)
                ctr++;
        }

        if(ctr == 2)
        {
            ctr = 0;
            for(int k = 1; k <= (i+2); k++)
            {
                if((i+2) % k == 0)
                    ctr++;
            }
            if(ctr == 2)
            { 
                printf("%d %d\n", i, (i+2));
                twin++;
            }         
        }
    }

    return 0;
}