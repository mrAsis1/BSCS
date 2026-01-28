#include <stdio.h>

int main()
{
    int nums[3] = {3,2,4};
    int target = 6;
    int ans[2];

    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans[0] = i;
                ans[1] = j; 
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        printf("%d,",ans[i]);
    }

    return 0;
}