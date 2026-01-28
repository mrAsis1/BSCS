#include <stdio.h>

int main()
{
    int num, ctr = 0;
     scanf("%d", &num);

    while( num > 0 )
    {
        int temp = num % 1000;

        for(int i = 1; i <= temp; i++)
        {
            if( temp % i == 0)
            {
                ctr++;
            } 
        }
        
        if( ctr == 2)
        {
            printf("%d-prime",temp);
        }
        if( ctr != 2)
        {
            printf("%d-composite",temp);
        }
        printf("\n");
        num /= 1000;
    }
    return 0;
}