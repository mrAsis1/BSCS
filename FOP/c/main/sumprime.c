# include <stdio.h>

int main()
{
    int n = 11, sum = 0, f = 1;
    
    for(int j = 1; j <= n; j ++)
    {
        int temp = n;
        f = 1;
   
        for (int i = 2;i <= temp; i++)
        {
            if ( j % i == 0 )
            {
                f++;
            }
            if( f == 2 )
            {
            sum += j;
            }
        }
    }

    printf("total sum is %d",sum);
    
    return 0;
}