#include <stdio.h>
#include <stdlib.h>
/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
 
 Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    int i, count = 0;
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
            printf("*(ret_arr + %d) : %d\n", count, *(ret_arr + count));
            count = count + 2;
        }
    }
    
    count = 1;
    
    for (i = i; i >= n; i++)
    {
        if(i >= n)
        {
            *(ret_arr + count) = nums[i];
            printf("*(ret_arr + %d) : %d\n", count, *(ret_arr + count));
            count = count + 2;
            
//            for(int i = 0; i < (2 * n); i++)
//            {
//                printf("*(ret_arr + %d) : %d\n", i, *(ret_arr + i));
//            }
        }
//        int check = (2*n) - 1;
        if(i >= (2*n) - 1)
        {
            printf("count: %d\n", count);
//            printf("check: %d\n", check);
            ret_arr = NULL; //Testing else block at the end of function
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
        printf("Code executed\n");
        free(ret_arr);
        *returnSize = 0;
        return NULL;
    }
}

int main()
{
    int a[] = {2,5,1,3,4,7};
    int rs = 6, n = 3;
    int *p = NULL;

    p = shuffle(a, sizeof(a)/sizeof(a[0]), n, &rs);

    if(p == 0)
    {
        printf("Invalid input\n");
    }
    else
    {
        for(int i = 0; i < (2 * n); i++)
        {
            printf("*(p + %d) : %d\n", i, *(p + i));
        }
    }
    return 0;
}

