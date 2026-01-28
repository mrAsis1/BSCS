#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    scanf("%d", &n);

    arr = (int*)calloc(n,sizeof(*arr));

    if(arr == NULL)
        printf("invalid");
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
    free(arr);

}