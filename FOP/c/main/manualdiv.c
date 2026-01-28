#include <stdio.h>

int main()
{
    int x, y;
    int ctr = 0;

    scanf("%d %d", &x, &y);

    while( x >= y )
    {
        x -= y;
        ctr++;
    }
    printf("%d",ctr);

    if ( x % y != 0 )
    {
        printf(".%d", x);
    }

    return 0;
}