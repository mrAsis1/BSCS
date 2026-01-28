#include <stdio.h>

int main()
{
    int num[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++)
    {
        printf("%d,", num[i]);
    }

    printf("\n");

    for(int i = 4; i >= 0; i--)
    {
        printf("%d,", num[i]);
    }

    return 0;
}