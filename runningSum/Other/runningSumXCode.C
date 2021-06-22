#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    if (nums == NULL || numsSize < 4)
    {
        *returnSize = 0;
        return NULL;
    }
    
    for(int i = 1; i < numsSize; i++)
    {
        nums[i] += nums[i - 1];
    }
    *returnSize = numsSize;
    return nums;
}

int main()
{
    int nums[] = {1,2,3,4};
    int rs;
    int *p = NULL;

    p = runningSum(nums, sizeof(nums)/sizeof(nums[0]), &rs);

    if( rs == 0)
    {
        printf("Running Sum not found\n");
    }
    else
    {
        printf("Running sum array returned is: {%d,%d,%d,%d}\n", p[0], p[1], p[2], p[3]);
    }
    return 0;
}
