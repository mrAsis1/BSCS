#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,2,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);

    printf("\n");

    float med = 0;
    int temp;
    int sort[size];

    for(int i = 0; i < size; i++)
        sort[i] = arr[i];

    for(int i = 0; i < size; i++)                
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(sort[j] > sort[j+1])
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++)
        printf("%d ",sort[i]);

    printf("\n");

    printf("%d\n",sort[(size/2)-1]);

    if(size % 2 == 0)
        med = (sort[(size/2)-1] + sort[(size/2)])/2.;

    else
       med = sort[(size/2)];
    
    printf("median:%.2f\n",med);

    return 0;
}