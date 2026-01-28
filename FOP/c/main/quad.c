#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d = 0;

    scanf("%f %f %f",&a, &b, &c);

    d = ( b * b ) - ( 4 * a * c );

    if (d > 0)
    {
        printf("%f ", (-b+ sqrt(d))/2*a);
        printf("%f", (-b-sqrt(d))/2*a);
    }   
    else if (d == 0)
    {
        printf("%f",-b/2*a);
    }
    else
    {
        printf("no real value");
    }
     

    return 0;
}