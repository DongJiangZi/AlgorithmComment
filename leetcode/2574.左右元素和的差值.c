/*
 * @lc app=leetcode.cn id=2574 lang=c
 *
 * [2574] 左右元素和的差值
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int i, SUM = 0;
    int leftSum[1005];
    int* answer = (int*)malloc(numsSize * sizeof(int));

    for(i = 0; i < numsSize; i++) {
        SUM += nums[i];
    }
    leftSum[0] = 0;
    for(i = 0; i < numsSize; i++) {
        leftSum[i + 1] = leftSum[i] + nums[i];
        answer[i] = abs(2 * leftSum[i] + nums[i] - SUM);
    }
    return answer;
}
// @lc code=end

