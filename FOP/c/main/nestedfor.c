#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        int sum = 0;
        for (int j = 1; j <= temp/2; j++)
        {
            if ( temp % j == 0 )
            {
                sum += j;
            }    
        }

        if( sum > temp)
        {
            printf("%d is an abundant number\n",i);
        }
    }

    
    return 0;
}