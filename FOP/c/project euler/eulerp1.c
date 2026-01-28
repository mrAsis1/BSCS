#include <stdio.h>

int main()
{
    int x, sum;
    x=sum=0;

    for (x=1; x<1000; x++)
    {
        if(((x%3)==0)||((x%5)==0))
        {
           sum+=x;
        }
    }

    printf("%d",sum);

    return 0;
}
