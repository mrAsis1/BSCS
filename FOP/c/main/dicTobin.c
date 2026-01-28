#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    while (num > 0)
    {
        if (num % 2 == 0 )
           printf("0");
        
        else 
            printf("1");
        
        num /= 2;
    }

    return 0;
}