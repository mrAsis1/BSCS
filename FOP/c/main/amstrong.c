#include <stdio.h>

int main()
{
    int num, ctr = 0, x = 0, y = 0, sum = 0;

    scanf("%d",&num);

    int temp1 = num;
    int temp2 = num;

    while ( temp1>0 )
    {
        ctr++;
        temp1 /= 10;
    }

    while ( temp2 > 0 )
    {  
        x = temp2 % 10;
        y = 1;

        for( int i = 1; i <= ctr; i++)
            y *= x;
        
        sum += y;
        temp2 /= 10;
    }

    if (num == sum)
        printf("amstrong");
    
    else
    
        printf("not amstrong");

    return 0;
}