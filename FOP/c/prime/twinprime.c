#include <stdio.h>

int main()
{
   int p1 = 0, p2 = 0, ctr = 0, twin = 0;

   for(int i = 2; twin != 5; i++)
   {
        ctr = 0;
        for(int j = 1; j <= i; j++)
        {
            if( i % j == 0 )
                ctr++;
        }
        if(ctr == 2)
        {
            p1 = p2;
            p2 = i;

            if( p1 != 0 && p2 - p1 == 2)
            {
                printf("(%d %d)\n",p1 ,p2);
                twin++;
            }
        }
   }

    return 0;
}