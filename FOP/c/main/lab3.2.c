#include <stdio.h>

int main()
{
    int sex, male=0, female=1;

    printf("0-male\n");
    printf("1-female\n");
    printf("choice: ");
    scanf("%d",&sex);

    if (sex==0)
    {
        sex=male;
    }
    else if(sex==1)
    {
        sex=female;
    }
    else
    {
        printf("invalid");
    }



    return 0;
}
