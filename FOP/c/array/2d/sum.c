#include <stdio.h>
#define rows 5
#define cols 5 

int main()
{
    int arr1[rows][cols] = {{1,2,3,4,5},
                            {6,7,8,9,10},
                            {11,12,13,14,15},
                            {16,17,18,19,20},
                            {21,22,23,24,25}};

    int arr2[rows][cols] = {{26,27,28,29,30},
                            {31,32,33,34,35},
                            {36,37,38,39,40},
                            {41,42,43,44,45},
                            {46,47,48,49,50}};

    int sum[rows][cols];

    printf("array 1\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("array 2\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("sum of 2 arrays\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}