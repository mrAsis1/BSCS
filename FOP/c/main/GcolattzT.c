#include <stdio.h>

int main()
{
    int num, n, ctr, max, a;
    ctr = 0;
    max = 0;

    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        num = i;
        ctr = 0;

        while(num>1)
        {
            if(num%2==0)
                num/=2;
            
            else
                num=num*3+1;
                
            ctr++;
        }

        if (ctr>max)
        {
            max=ctr;
            a=i;
        }
    }
    printf("%d:%d",a,max);
    
    return 0;
}