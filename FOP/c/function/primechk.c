#include <stdio.h>

void isPrime(int num);

int main()
{
    int num;

    printf("prime check\n");
    scanf("%d",&num);

    isPrime(num);

    return 0;
}

void isPrime(int num)
{
    int ctr = 0;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            ctr++;
        
    }

    if(ctr == 2)
        printf("%d is prime", num);
    
    else
        printf("%d is not a prime", num);
}