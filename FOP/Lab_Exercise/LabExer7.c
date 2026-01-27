#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main ()
{
    int n, m;

    time_t t;
    srand((unsigned) time(&t));

    printf("input n: ");
    scanf("%d",&n);

    printf("input m: ");
    scanf("%d",&m);

    printf("\n");

    int arr1[n][m];

    printf("Integer Array:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr1[i][j] = rand()%1000;
            printf("%d, ",arr1[i][j]);
        }
        printf("\n");
    }

    char arr2[n][m];
    int prev, next, fib;

    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            prev=0,next=1,fib=0;
            while (fib < arr1 [i][j])
            {
                fib=prev+next;
                next=prev;
                prev=fib;
            }
                if (arr1[i][j] == fib)
                {
                    arr2[i][j] = '1';
                }
                else
                     arr2[i][j] = '0';
        }
    }

    printf("Character Array:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%c, ",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
