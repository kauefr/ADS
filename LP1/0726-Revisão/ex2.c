//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int nums[3];
    
    printf("Digite 3 numeros inteiros:\n");
    scanf(" %d %d %d", nums, nums+1, nums+2);

    if(nums[0] >= nums[1])
    {
        if(nums[0] >= nums[2])
        {
            printf("%d", nums[0]);
        }
        else
        {
            printf("%d", nums[2]);
        }
    }
    else
    {
        if(nums[1] >= nums[2])
        {
            printf("%d", nums[1]);
        }
        else
        {
            printf("%d", nums[2]);
        }
    }
    return 0;
}
