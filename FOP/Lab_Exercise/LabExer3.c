#include <stdio.h>

int main()
{
    int gender;
    float a;    // a = waist
    float b;    // b = hip
    float ratio;

    printf("0-Male\n");
    printf("1-female\n");
    printf("Choice: ");
    scanf("%d",&gender);

    if (gender==0)
    {
        printf("Input male Waist (inches):");
        scanf("%f",&a);
        printf("Input male Hip (inches):");
        scanf("%f",&b);

        ratio = a / b;

        printf("Ratio: %.2f\n",ratio);

        if( ratio < 0.96)
        {
            printf("Category: Low Risk\n");
        }
        else if (ratio >= 0.81 && ratio <= 1.0)
        {
            printf("Category: Moderate Risk\n");
        }
        else if (ratio >= 1.0)
        {
            printf("Category: High Risk\n");
        }
        else
        {
            printf("invalid");
        }
    }
    else if (gender==1)
    {
        printf("Input Female Waist (inches):");
        scanf("%f",&a);
        printf("Input Female Hip (inches):");
        scanf("%f",&b);

        ratio = a / b;

        printf("Ratio: %.2f\n",ratio);

          if( ratio < 0.81)
        {
            printf("Category: Low Risk\n");
        }
        else if (ratio >= 0.81 && ratio <= 0.85)
        {
            printf("Category: Moderate Risk\n");
        }
        else if (ratio >= 0.86)
        {
            printf("Category: High Risk\n");
        }
        else
        {
            printf("invalid");
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
