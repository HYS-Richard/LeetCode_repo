int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0 ){
        return 0;
    }
    if (numsSize == 1){
        return 1;
    }
    if (numsSize < 0){
        return -1;
    }
    int count = 0;
    for (int i = 1,j = 1; i < numsSize; i++,j++){
        if(nums[i] == nums[i-1]){
            count++;
            j--;
        }
        nums[j] = nums[j+count];
    }
    return numsSize-count;
}