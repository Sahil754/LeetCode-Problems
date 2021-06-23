//Solution 1-02
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{

int *output=(int *)malloc(numsSize *sizeof(int));
*returnSize=numsSize;

int i,j;
for(i=0,j=n;i<n,j<numsSize;i++,j++)
{
      output[2*i]=nums[i];
      output[2*i+1]=nums[j];
}

return output;
}
