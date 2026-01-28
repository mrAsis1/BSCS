#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for (int i = 1; i <= n/2; i++)
    {
        if ( n % i == 0 )
            sum += i;    
    }

    if( sum > n)
        printf("%d is an abundant number.",n);

    else 
        printf("%d is not an abundant number.",n); 
    
    return 0;
}