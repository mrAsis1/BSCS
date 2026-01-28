#include <stdio.h>

int main()
{
    int num1, low, high;
    low = high = 0;

    scanf( "%d", &num1 );
    int temp = num1;

    for( int i = 1; i <= temp; i++)
    {
        int num2 = num1;
        scanf("%d", &num1);

        if(num1 < 0)
        {
            num1 = num1 * -1;
        }

        if( num1 > num2 )
        { 
            high = num1;
        }
        else if( num1 < num2)  
        {
            low = num1;
        }

    }
    printf("\n%d - %d", low, high);


    return 0;
}