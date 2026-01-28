#include <stdio.h>

int main()
{
    int i,j,k,sum;
    i,k,sum =0;
    j = 1;


    for (k=1; k<=4000000; k = i + j)
    {
        if(k%2 == 0)
        {
           sum += k;
        }
        i = j;
        j = k;
    }
    printf("%d",sum);

    return 0;
}
