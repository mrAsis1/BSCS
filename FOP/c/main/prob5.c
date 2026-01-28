#include <stdio.h>

int main()
{
    int num, sum = 1, big = 0;

    scanf("%d",&num);

    while(num > 0)
    { 
        int temp = num;
        sum = 1;
       
        while(temp>0)
        {
            sum *= temp % 10;
            temp /= 10;
        }
   
        if(sum>big)
            big = sum;
        num /= 10;    
    }

    printf("%d\n",big);
    return 0;
}