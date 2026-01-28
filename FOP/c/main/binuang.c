#include <stdio.h>
#include <math.h>

int main()
{
    float x=0, y=5, z=10;

    x = 2*sin((y+z)/2)*cos((y-z)/2);

    printf("%f",x);

    return 0;
}
