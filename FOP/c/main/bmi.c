#include <stdio.h>

int main()
{
    float h=0, w=0, b=0;
    
    printf("input weight in kilogram: ");
    scanf("%f",&w);

    printf("input height in meters: ");
    scanf("%f",&h);

    b = w/(h*h);

    printf("BMI == %.2f\n",b);

    if (b<18.5)
    {
        printf("Underweight");
    }
    else if (b>=18.5 && b<24.9)
    {
        printf("Normal weight");
        //printf("Hello World!");
    }
    else if (b>=25.0 && b<29.9)
    {
        printf("Overweight");
    }
    else if (b>=30.0)
    {
        printf("Obese");
    } 
    
    return 0;
}