#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++)
        printf("%d ",arr[i]);

    printf("\n");
    
    // mean
    float sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];

    printf("mean:%.2f\n",sum/size);

    // medain
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
    
    if(size % 2 == 0)
        med = (sort[(size/2)-1] + sort[(size/2)])/2.0;

    else
       med = sort[(size/2)];
    
    printf("median:%.2f\n",med);

    //mode
    int max = 0, ctr = 0;

    for(int i = 0; i < size; i++)
    {
        ctr = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                ctr++;
            
        }
        if (ctr > max && ctr != 1)
            max = arr[i];
           
    }
  
    if(max != 0)
        printf("mode:%d \n", max);
    else
        printf("mode:");
    return 0;
}