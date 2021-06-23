//Solution 2 - 93% faster
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* res= malloc(numsSize*sizeof(int));
    int i=0,j=n,k=0;
    for(k;k<numsSize;k++){
       if(k%2==0){
            res[k]=nums[i];
            i++;
        }
        else{
            res[k]=nums[j];
            j++;
        }
    }
    *returnSize=numsSize;
    return res;

}
