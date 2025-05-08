/*
 * @lc app=leetcode.cn id=713 lang=c
 *
 * [713] 乘积小于 K 的子数组
 */

// @lc code=start
int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    if (k <= 1) return 0;
    int l = 0, ans = 0;
    long mul = 1;
    for (int r = 0; r < numsSize; r++) {
        mul *= nums[r];
        while (mul >= k && l <= r) {
            mul /= nums[l];
            ++l;
        }
        ans += r - l + 1;
    }
    return ans;
}
// @lc code=end
