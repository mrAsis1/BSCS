#include <stdio.h>

int main()
{
    unsigned long long num = 1000, pow = 1, dig_sum = 0;

    for ( int i = 1; i <= num; i++ ) 
    {
        pow += pow;
    }              


    while (pow>0)
    {
        dig_sum += pow % 10;
        pow /= 10;
    }
    printf("%lld",dig_sum);

    return 0;
}