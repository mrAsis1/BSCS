#include <stdio.h>

int main()
{
    int num[2];

    for(int i = 0; i < 2; i++)
        scanf("%d", &num[i]);

    printf("%d", num[0] + num[1]);

    return 0;
}