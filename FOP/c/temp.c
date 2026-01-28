#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main() 
{
    int m;

    printf("Enter a number: ");
    scanf("%d", &m);

    for (int i = 2; i < m; i++)
    {
        if (isPrime(i))
            printf("%d is a prime number\n", i);
    }

    return 0;
}

bool isPrime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
