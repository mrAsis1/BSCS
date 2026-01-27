#include <stdio.h>
#include <math.h>
int main()
{
//Code for Problem 1

    float r, m, reff;

    printf("Annual interest rate (%%): ");
    scanf("%f",&r);

    printf("Number of interest conversions per year: ");
    scanf("%f",&m);

    reff =(pow(1+r/100/m,m)-1)*100;


    printf("Effective interest rate is %.3f%%\n",reff);


//Code for Problem 2

    //a=1000, b=500, c=100, d=50, e=20, f=10, g=5, h=1
    int a, b, c, d, e, f, g, h, pesos;

    printf("input pesos: ");
    scanf("%d",&pesos);
    printf("%d pesos\n",pesos);

    a=pesos/1000;
    pesos%=1000;

    b=pesos/500;
    pesos%=500;

    c=pesos/100;
    pesos%=100;

    d=pesos/50;
    pesos%=50;

    e=pesos/20;
    pesos%=20;

    f=pesos/10;
    pesos%=10;

    g=pesos/5;
    pesos%=5;

    h=pesos/1;
    pesos%=1;

    printf("%d:1000, %d:500, %d:100, %d:50 %d:20, %d:10, %d:5, %d:1",a, b, c, d, e, f, g, h);

    return 0;

}
