

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i, count = 0, check = (2*n) - 1;
    int *ret_arr = (int *) malloc((2*n) * sizeof(int));
    
    if (ret_arr == NULL || nums == NULL || numsSize < 2)
    {
        *returnSize = 0;
        return NULL;
    }
    
    for(i = 0; i < n; i++)
    {
        
        if(i < n)
        {
            *(ret_arr + count) = nums[i];
            count = count + 2;
        }
    }
    
    count = 1;
    
    for (i = i; i >= n; i++)
    {
        if(i >= n)
        {
            *(ret_arr + count) = nums[i];
            count = count + 2;
        }
        if(i >= check)
        {
            break;
        }
    }
    
    if(ret_arr != NULL)
    {
        *returnSize = 2 * n;
        return ret_arr;
    }
    else
    {
        free(ret_arr);
        *returnSize = 0;
        return NULL;
    }
}
