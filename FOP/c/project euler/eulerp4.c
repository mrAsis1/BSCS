#include <stdio.h>

int main()
{
    int num, temp, rev, maxpal=0;
    
    for (int i = 100; i <= 999; i++)
    {
        for(int j = i; j <= 999; j++)
        {
            num = i * j;
            temp = num;
            rev = 0;
            while(temp > 0)
            {
                rev *= 10;
                rev = temp % 10 + rev;
                temp /= 10; 
            }
            
            if( num == rev)
            {
                if (num > maxpal)
                {
                    maxpal = num;
                }
               
            }    
        }
    }
    printf("\nmax_%d",maxpal);
    return 0;
}