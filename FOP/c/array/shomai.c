#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
    int p = 0, q = s - 1;
    int pal = 1;  

    while (p <= q)
    {
        if (arr[p] != arr[q])
        {
            pal = 0; 
            break;
        }
        p++;
        q--;
    }

    for(int i = 0; i < s; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");

    if (pal)
        printf("palindrome");
    else
        printf("palindrome");

    return 0;
}
