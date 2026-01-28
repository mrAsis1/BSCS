#include <stdio.h>
#define rows 5
#define cols 5

int main()
{
    int arr[rows][cols] = {{1,2,3,4,5},
                           {6,7,8,9,10},
                           {11,12,13,14,15},
                           {16,17,18,19,20},
                           {21,22,23,24,25}};
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int z = 0; z < rows; z++)
    {
        int i = z;
        int j = cols-1;
     
        while(i >= 0)
        {
            printf("%d ",arr[i][j]);
            i--;
            j--;
        }
        printf("\n");
    }

     for(int z = cols-2; z >= 0; z--)
    {
        int i = rows-1;
        int j = z;
     
        while(j >= 0)
        {
            printf("%d ",arr[i][j]);
            i--;
            j--;
        }
        printf("\n");
    }

    return 0;
}