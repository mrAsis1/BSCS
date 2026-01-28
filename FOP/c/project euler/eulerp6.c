#include <stdio.h>

int main()
{
    int num = 100, sum1 = 0, sum2 = 0, temp = sum1, total= 0;

    for(int i = 1; i <= num; i++)
    {
        sum1 += i * i;
        sum2 += i;
    }
    sum2 = sum2 * sum2;
   
    printf("%d",sum2 - sum1);
    return 0;
}