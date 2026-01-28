#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int m = 3;
    int arr1[] = {10,7,1,11,13,25};     
    int arr2[] = {4,5,6};

    int *arr = (int*)calloc(n,sizeof(int));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            *(arr+i) += arr1[i] * arr2[j];
    }

    for(int i = 0; i < n; i++)
        printf("%d ", *(arr+i));
    free(arr);
    return 0;
}