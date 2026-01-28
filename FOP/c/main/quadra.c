#include <stdio.h>
#include <math.h>

int main()
{
    float a  , b , c;
    float d;
    printf("Enter coeffecients for a: ");
    scanf("%f", &a);
    printf("Enter coeffecients for b: ");
    scanf("%f", &b);
    printf("Enter coeffecients for c: ");
    scanf("%f", &c);


    if( a < 0)
    {
        return 0;
    }

    d = sqrt((b*b) - (4 * a * c));

    if( d > 0)
    {
        printf("%f\n",   ((-b) + d)/ (2 * a));
        printf("%f",   ((-b) - d)/ (2 * a));
    }
    else if (d == 0)
    {
        printf("%f",  ( ((-b))/(2*a) ));
    }
    else
    {
        printf("No real value ");
    }

    return 0;
}
