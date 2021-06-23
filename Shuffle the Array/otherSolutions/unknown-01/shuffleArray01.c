//Solution 1-01
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int j=0,k=n;
   int* shuffled=(int*)malloc(numsSize * sizeof(int));
   
    for(int i=0;i<(2*n-1);i+=2)
    {
     shuffled[i]=nums[j++];
        shuffled[i+1]=nums[k++];
        
    }
    *returnSize=numsSize;
    return shuffled;
}
