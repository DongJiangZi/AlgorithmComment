/*
 * @lc app=leetcode.cn id=724 lang=c
 *
 * [724] 寻找数组的中心下标
 */

// @lc code=start
int pivotIndex(int* nums, int numsSize) {
    int sum[10005], sum_right[10005];
    int i;
    sum[0] = 0;
    for (i = 1; i <= numsSize; i++) {
        sum[i] = sum[i - 1] + nums[i - 1];
    }

    sum_right[0] = 0;
    for (i = 1; i <= numsSize; i++) {
        sum_right[i] = sum_right[i - 1] + nums[numsSize - i];
    }

    for (i = 1; i <= numsSize; i++) {
        if (sum[i - 1] == sum_right[numsSize - i]) {
            return i - 1;
        }
    }
    return -1;
}
// @lc code=end

