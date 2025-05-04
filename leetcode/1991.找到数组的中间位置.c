/*
 * @lc app=leetcode.cn id=1991 lang=c
 *
 * [1991] 找到数组的中间位置
 */

// @lc code=start
int findMiddleIndex(int* nums, int numsSize) {
    int sum[105], sum_right[105];
    int i;
    sum[0] = 0;
    for(i = 1; i <= numsSize; i++) {
        sum[i] = sum[i - 1] + nums[i - 1];
    }

    sum_right[0] = 0;
    for(i = 1; i <= numsSize; i++) {
        sum_right[i] = sum_right[i - 1] + nums[numsSize - i];
    }

    for(i = 1; i <= numsSize; i++) {
        if(sum[i - 1] == sum_right[numsSize - i]) {
            return i - 1;
        }
    }
    return -1;
}
// @lc code=end

