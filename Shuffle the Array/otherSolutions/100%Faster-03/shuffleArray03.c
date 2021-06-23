//Solution 3 - 100% faster
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int *part1 = (int *)malloc(n * sizeof(int));
    int *part2 = (int *)malloc(n * sizeof(int));
    int *answer = (int *)malloc(*returnSize * sizeof(int));
    
    for(int i = 0, j = n; i < n; i++, j++){
        part1[i] = nums[i];
        part2[i] = nums[j];
    }
    for(int i = 0, j = 0; i < 2 * n; i++, j++){
        answer[i] = part1[j];
        answer[i+1] = part2[j];
        i++;
    }
        return answer;
        free(answer);
}
