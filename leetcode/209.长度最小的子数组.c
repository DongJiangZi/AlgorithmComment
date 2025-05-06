/*
 * @lc app=leetcode.cn id=209 lang=c
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
int minSubArrayLen(int target, int* nums, int numsSize) {
    int ans = 1e5 + 1, l = 0, r = 0;
    long sum = 0;
    
    while(r <= numsSize - 1) {
        sum += nums[r];
        if(sum >= target) {
            while(l <= r && sum - nums[l] >= target) {
                sum -= nums[l];
                l++;
            }
            if(r - l + 1 < ans) {
                ans = r - l + 1;
            }
        }
        r++;
    }
    if(ans >= 1e5 + 1) {
        ans = 0;
    }
    return ans;
}
// @lc code=end

