#include <stdio.h>
#define row 5
#define col 5

int main()
{
    int arr[row][col] = {{1,2,3,4,5},
                         {6,7,8,9,10},
                         {11,12,13,14,15},
                         {16,17,18,19,20},
                         {21,22,23,24,25}};

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int k = 0; k < row ; k++)
    {
        int i = k;
        int j = 0;

        while(i >= 0)
        {
            printf("%d ",arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for(int k = 1; k < col ; k++)
    {
        int i = row - 1;
        int j = k;

        while(j <= col-1)
        {
            printf("%d ",arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

}