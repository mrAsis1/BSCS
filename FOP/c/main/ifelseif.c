#include<stdio.h>

int main()
{
    float ratio=0.85;

    if (ratio<0.80)
    {
        printf("Low Risk");
    }
    else if (ratio >= 0.81 && ratio < 0.85)
    {
        printf("Moderate Risk");
    }
    else if (ratio >= 0.86)
    {
        printf("High Risk");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
