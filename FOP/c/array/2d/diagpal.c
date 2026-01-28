#include <stdio.h>
#define size 5

int main()
{
    int arr1[size][size] = {{1,2,3,4,1},{0,3,2,4,0},{6,9,5,3,1},{7,3,6,3,9},{1,7,8,9,1}};
    int arr2[size];
    int n = 0, pal = 1;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <size; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = 0; i < size; i++)
    {
        if(arr1[i][i] == arr1[size-i-1][size-i-1])
        {
            arr2[n] = arr1[i][i];
            n++;
        }
        else
        {
            pal--;
            break;
        }
    }

    if(pal)
    {
        for(int i = 0; i <size; i++)
        {
            printf("%d ",arr2[i]);
        }
    }
    else
        printf("not a pal");

}