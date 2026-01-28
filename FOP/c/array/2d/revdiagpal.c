#include <stdio.h>
#define size 3

int main()
{
    int arr[size][size] = {{3,6,1},{5,2,7},{1,7,4}};
    int pal[size];
    int n = 0, ctr = 1;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < size; i++)
    {
        if(arr[i][size-i-1] == arr[size-i-1][i])
        {
            pal[n] = arr[i][i];
            n++;
        }
        else
        {
            ctr--;
            break;
        }
    }

    if(ctr)
    {
        for(int i = 0; i < size; i++)
            printf("%d ", pal[i]);
    }
    else
        printf("not palindrome");
    return 0;
}