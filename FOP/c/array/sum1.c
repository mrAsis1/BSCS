#include <stdio.h>

int main()
{
    int a, b;
    int x = 0, y = 0;
    int sum1 = 0, sum2 = 0;

    scanf("%d",&a);
    int num1[a];

    for(int i = 0; i < a; i++)
    {
        scanf("%d",&num1[i]);
        sum1 += num1[i];
    }

    // for(int i = 0; i < a; i++)
    //    printf("%d,",num1[i]);

    // printf("\n");

    scanf("%d",&b);
    int num2[b];

    for(int i = 0; i < b; i++)
    {
        scanf("%d",&num2[i]);
        sum2 += num2[i];
    }

    // for(int i = 0; i < b; i++)
    //    printf("%d,",num2[i]);

    printf("\n");
    printf("%d", sum1 + sum2);
    
    return 0;
}
