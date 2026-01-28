#include <stdio.h>

int main()
{
    int n;
    int m = n;
    int temp;

    scanf("%d",&n);

    while(n > 0)
    {
        temp = n % 10;
        printf("%d",temp);
        n /= 10;
    }
    return 0;
}
