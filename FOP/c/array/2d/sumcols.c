#include <stdio.h>
#define rows 5
#define cols 5 
#define size 5

int main()
{
    int arr1[rows][cols] = {{1,2,3,4,5},
                            {6,7,8,9,10},
                            {11,12,13,14,15},
                            {16,17,18,19,20},
                            {21,22,23,24,25}};
    int sum[size] = {0};

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

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum[j] += arr1[i][j];
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}