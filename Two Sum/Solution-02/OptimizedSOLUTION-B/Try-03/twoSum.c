#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 10

static int hash_arr[HASH_SIZE];

void print_hash(char *msg)
{
    int i;
    printf("%s ", msg);

    for(i = 0; i < HASH_SIZE; i++)
    {
        printf("[%d] %d ,", i, hash_arr[i]);
    }
    printf("\n");
}

void hash_init()
{
    memset(hash_init, 0, sizeof(hash_arr));
}

int hash_insert(int n, int idx)
{
    if(hash_arr[n % HASH_SIZE] == 0)
    {
        hash_arr[n % HASH_SIZE] = idx; //inserts n into the hash table that has been found to be empty
        print_hash("INS"); //This will print after the insert
        return 0; //Tells the insertion was successful
    }
    else 
    {
        return -1; //Tells that the insertion failed
    }
}

int hash_find(int n)
{
    if(hash_arr[n % HASH_SIZE] != 0)
    {
        print_hash("FIN");
        return hash_arr[n % HASH_SIZE];
    }
    else
    {
        return -1;
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i;
    int *ret_arr = (int*) malloc(2 * sizeof(int));

    if(ret_arr == NULL || nums == NULL || numsSize < 2)
    {
        *returnSize = 0;
        return NULL;
    }

    for(i = 0; i < numsSize; i++)
    {
        if(hash_find(target - nums[i] == -1))
        {
            //hash_insert(nums[i]);  Add another parameter to hash_insert function
        }
        else
        {
            ret_arr[0] = i;
        }
    }
}