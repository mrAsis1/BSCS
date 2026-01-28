#include <stdio.h>

int main()
{
    int num[5], t[5], f[5];
    int ctr = 0, x = 0 , y = 0;
    int temp;

    for(int i = 0; i < 5; i++)
        scanf("%d", &num[i]);

    for(int i = 0; i < 5; i++)
    {
        temp = num[i];
        ctr = 0;

        if(num[i] == 1)
            continue;

        for(int j = 1; j <= temp; j++)
        {
            if(temp % j == 0)
                ctr++;
        }

        if(ctr == 2)
        {
            t[x] = num[i];
            x++;
        }
        else
        {
            f[y] = num[i];
            y++;
        }
    }

    for(int i = 0; i < 5; i++)
        printf("%d,",num[i]);

    printf("\n");

    for(int i = 0; i < x; i++)
        printf("%d,", t[i]);

    printf("\n");

    for(int i = 0; i < y; i++)
        printf("%d,", f[i]);

    return 0;
}
