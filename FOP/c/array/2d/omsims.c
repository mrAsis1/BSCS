#include <stdio.h>
#define row 2
#define col 4

int main()
{
    int arr1[row][col] = {{1,6,4,4},
                         {4,8,24,3}};

    int arr2[row][col] = {0};

    printf("int arr:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            printf("%d,",arr1[i][j]);

        printf("\n");
    }
    printf("\n");

    int x = 0, y = 1, z = 0, n = 0;
    int fib[50];

    while( z < 1000)
    {
        fib[n] = z;
        z = x + y;
        x = y;
        y = z;
        n++;
    }

    int m = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            m = 0;
            while(arr1[i][j] >= fib[m])
            {
                if(arr1[i][j] == fib[m])
                {
                    arr2[i][j] = 1;
                    break;
                }
                m++;
            }
        }
    }

    printf("char arr:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            printf("%d,",arr2[i][j]);

        printf("\n");
    }

    return 0;
}
