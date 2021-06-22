#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 5000

static int hash_arr[HASH_SIZE];

void print_hash(char *msg)
{
    int i;
    printf("%s ", msg);

    for(i = 0; i < HASH_SIZE; i++)
    {
        printf("[%d] %2d ,", i, hash_arr[i]); //Printing the index first and then the value at that index after that
    }
    printf("\n");
}

void hash_init()
{
    memset(hash_arr, -1, sizeof(hash_arr)); //Initializing the hash array to 0 in each of the array's index
}

int hash_insert(int n, int idx)
{
    if(hash_arr[n % HASH_SIZE] == -1) //Checking if the spot in the hash array is empty, as all indices in the array have been initialized to 0 by the initialization function(void hash_init())
    {
        hash_arr[n % HASH_SIZE] = idx; //inserting idx into the hash array
        print_hash("INS"); //INS is short for Insert
        return 0; //tells insertion was successful
    }
    else
    {
        return -1; //Mentioning the insert failed
    }
}

int hash_find(int n)
{
    print_hash("FIN"); //FIN is short for FIND
    if(hash_arr[n % HASH_SIZE] != -1) //Checks if there is an existing element at the searched location
    {
        return hash_arr[n % HASH_SIZE]; // Returns the number found at the searched spot
    }
    else
    {
        return -1; // Returns -1 when find fails
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, idx;
    int *ret_arr = (int*) malloc (2 * sizeof(int));

    if (ret_arr == NULL || nums == NULL || numsSize < 2)
    {
        *returnSize = 0;
        return NULL;
    }

    hash_init();

    for(i = 0; i < numsSize; i++)
    {
        if((idx = hash_find(target - nums[i])) == -1)
        {
            hash_insert(nums[i], i);
        }
        else
        {
            ret_arr[0] = i;
            ret_arr[1] = idx;
            *returnSize = 2;
            return ret_arr;
        }
    }
    free(ret_arr);
    *returnSize = 0;
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