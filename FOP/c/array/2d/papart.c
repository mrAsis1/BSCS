#include <stdio.h>
#define row 3
#define cols 5

void disp(int arr[row][cols]);
void next(int arr[row][cols]);

int main()
{
    int arr[row][cols] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    
    disp(arr);
    next(arr);
    disp(arr);
}

void disp(int arr[row][cols])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void next(int arr[row][cols])
{
    for(int i = 0; i < row; i++)
    {
        int temp;
        temp = arr[i][cols - 2];
        arr[i][cols - 2] = arr[i][cols - 1];
        arr[i][cols - 1] = temp;
    }
}
    