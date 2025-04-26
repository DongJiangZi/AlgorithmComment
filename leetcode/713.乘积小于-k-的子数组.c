/*
 * @lc app=leetcode.cn id=713 lang=c
 *
 * [713] 乘积小于 K 的子数组
 */

// @lc code=start
int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    int i, j, len = 0, flag = numsSize * (numsSize + 1) / 2;
    long long MUL = 1;
    while(len < numsSize) {
        for(i = 0; i + len < numsSize; i++) {
            for(j = i; j <= i + len; j++) {
                MUL *= nums[j];
                if(MUL >= k) {
                    flag--;
                    break;
                }
            }
            MUL = 1;
        }
        len++;
    }
    return flag;
}
// @lc code=end

