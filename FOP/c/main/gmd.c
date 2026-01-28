#include <stdio.h>

int main()
{
    int a = 56, b = 98;

    while( a != b )
    {
        if( a > b )
        {
            a -= b;
        }
        else if ( b > a )
        {
            b -= a;
        }
    }
    printf("%d",a);

    return 0;
}