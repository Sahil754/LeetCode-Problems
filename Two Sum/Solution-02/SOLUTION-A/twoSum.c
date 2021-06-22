#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //setting variables to itterate twice through the array
    int i, j;
    //Allocating space for our array we're going to return
    int *ret_arr = (int*)malloc(2 * sizeof(int));

    //Checking if the return array didn't get allocated as there wasn't enough memory, or array is empty or there's less than 2 elements in the array (as need minimum of 2 elements to add together to get the target integer)
    if (ret_arr == NULL || nums == NULL || numsSize < 2)
    {
        *returnSize = 0;
        return NULL;
    }
    
    //Iterating over the array twice, and setting the found values that actually add up to the target, and setting returnSize of the array accordingly before that. Lastly returning the array.
    for(i = 0; i < numsSize; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                *returnSize = 2;
                ret_arr[0] = i;
                ret_arr[1] = j;
                return ret_arr;
            }
        }
    }
    //In the case that none of the array elements add up to the target, we return the returnsize of 0 and free the allocated memory for the return array and return NULL.
    *returnSize = 0;
    free(ret_arr);
    return NULL;
}

int main()
{
    int a[] = {2, 7, 11, 15};
    int rs, target = 9;
    int *p = NULL;

    p = twoSum(a, sizeof(a)/sizeof(a[0]), target, &rs);

    if( rs == 0)
    {
        printf("Target not found\n");
    }
    else
    {
        printf("Target found at indices %d and %d\n", p[0], p[1]);
        free(p);
    }
    return 0;
}
