#include <stdio.h>

int main()
{
    int num, sum = 0, rev = 0;

    printf("input 3-9\n");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++)
    {
        sum = sum + i*i;
    } 

    printf("%d\n",sum);

    while(sum > 0)
    {
        rev = (rev * 100) + (sum % 10) + 65;
        sum /= 10;
    }

    while(rev > 0)
    {
        printf("%c", rev % 100);
        rev /= 100;
    }

    return 0;
}