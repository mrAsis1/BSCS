#include <stdio.h>

int main()
{
    int n;
    int f = 1;
    int sum = 0;

    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        int temp = i;
        f = 1;
        sum = 0;

        while (f<=temp/2)
        {
            if (temp%f==0)
                sum+=f;
            
            f++;
        }
        
        if (sum==temp)
            printf("%d:perfect\n",temp);
    }
    return 0;
}