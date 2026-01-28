#include <stdio.h>

int main() 
{
    int n;
    int ctr = 1;;
    
    scanf("%d", &n);
   
    for (int temp = n; temp > 1;temp/=2) 
    {
        if (temp % 2 != 0) 
        {
            ctr = 0;
            break;
        }      
    }
       
    if ( ctr == 1)
        printf("%d is a power of 2",n);
    else
        printf("%d is not a power of 2",n);
    return 0;
}