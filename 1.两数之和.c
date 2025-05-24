/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
*returnSize = 2;
int* ret = (int*)malloc(sizeof(int)*2); 
  if (ret == NULL){
    return NULL;
  }  
  for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
          if (nums[i] + nums[j] == target){
               ret[0] = i;
               ret[1] = j;
               return ret;
          }
        }    
 } 
  return ret;
}
// @lc code=end

