#include <stdio.h>
#define size 5

int main()
{
    int arr[size][size] = {{6,2,3,4,9},{0,7,2,3,0},{6,9,8,2,1},{7,3,6,4,9},{1,7,8,9,5}};
    int temp;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < size; i++)
    {
        temp = arr[i][i];
        arr[i][i] = arr[i][size-i-1];
        arr[i][size-i-1] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int rows = sizeof(arr) / sizeof(arr[0]);          // Number of rows
int columns = sizeof(arr[0]) / sizeof(arr[0][0]);  // Number of columns

printf("%d\n", rows);
printf("%d", columns);
}