#include <stdio.h>

int main()
{
    int num = 23745984;
    int h, m, s, d;
    h = m = s = d = 0;

    d = num / 86400;
    h = (num % 86400 ) / 3600 ;
    m = ( num % 3600 ) / 60;
    s = ( num % 3600 ) % 60;

    printf("d:%d h:%d m:%d s:%d ",d ,h , m , s );

    return 0;
}