#include <stdio.h>

int main()
{
    int n;
    int sum = 0, sum1 = 0, sum2 = 0;
    int x = 0, y = 0;

    scanf("%d", &n);

    int num[n], odd[n], even[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for(int i = 0; i < n; i++)
    {
        if(num[i] % 2 == 0)
        { 
            even[y] = num[i];
            sum1 += num[i];
            y++;
        }
        else
        {
            odd[x] = num[i];
            sum2 += num[i];
            x++;
        }
        sum += num[i];
    }

    for(int i = 0; i < n; i++)
        printf("%d", num[i]);
    
    printf("   %d\n", sum);

    for(int i = 0; i < x; i++)
        printf("%d", odd[i]);

    printf("   %d\n", sum2);

    for(int i = 0; i < y; i++)
        printf("%d", even[i]);

    printf("   %d\n", sum1);

    return 0;
}