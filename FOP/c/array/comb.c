#include <stdio.h>

int main()
{
    int n1, n2, n = 0;

    scanf("%d", &n1);
    int num1[n1];

    for(int i = 0; i < n1; i++)
        scanf("%d",&num1[i]);

    scanf("%d", &n2);
    int num2[n2];

    for(int i = 0; i < n1; i++)
        scanf("%d",&num2[i]);

    int con[n1+n2];

    for(int i = 0; i < n1; i++)
    {
        con[n] = num1[i];
        n++;
    }

    for(int i = 0; i < n2; i++)
    {
        con[n] = num2[i];
        n++;
    }

    for(int i = 0; i < n; i++)
        printf("%d,",con[i]);

    return 0;
}