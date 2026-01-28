#include<stdio.h>

int isprime(int n);

int main()
{   
    int n;
    printf("input a number: ");
    scanf("%d", &n);

    if(isprime(n))
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);

    return 0;
}

int isprime(int n)
{
    for(int i = 2; i < n/2; i++)
    {
        if( n % i == 0)
            return 0;
    }
    
    return 1;
}
