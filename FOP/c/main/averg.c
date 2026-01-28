#include <stdio.h>

int main()
{
    float g1, g2, g3, g4, g5 ,ave;

    printf("enter grades\n");
    scanf("%f %f %f %f %f",&g1, &g2, &g3, &g4, &g5);

    ave = (g1 + g2 + g3 + g4 + g5)/5;

    printf("average: %.2f%% --- ",ave);

    if(ave>=90 && ave<=100)
    {
        printf("A\n");
    }
    else if (ave>=80 && ave<=89)
    {
        printf("B\n");
    }
    else if (ave>=70 && ave<=79)
    {
        printf("C\n");
    }
    else if (ave>=60 && ave<=69)
    {
        printf("D\n");
    }
    else if (ave>=50 && ave<=59)
    {
        printf("E\n");
    }
     else if (ave>=0 && ave<=49)
    {
        printf("FAIL\n");
    }
     else
    {
        printf("ERROR\n");
    }


    return 0;
}
