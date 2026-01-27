#include <stdio.h>

int main()
{
    int a = 0, b= 1, c, n;
    float ratio = 0, odd = 0, even = 0;

    printf("N: ");
    scanf("%d", &n);

    for (int i= 0; i<n; i++ )
    {
        c= a + b;
        a= b;
        b= c;
        if  (c % 2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Odd Fib: %.0f\n", odd);
    printf("Even Fib: %.0f\n", even);

    ratio = odd/even;

    printf("Ratio: %.2f\n",ratio);

    return 0;
}
