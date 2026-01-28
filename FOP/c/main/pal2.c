#include <stdio.h>

int main()
{
    int n = 765432;
    int m = n;
    int r = 0;

    while(n>0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    printf("n %d\n",m);
    printf("r %d\n",r);

    if(m==r)
    {
        printf("palindrome");
    }
    else
    {
        printf("hello world");
    }

    return 0;
}
