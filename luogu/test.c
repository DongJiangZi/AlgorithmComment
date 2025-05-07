#include <stdio.h>

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

int main() {
    int nums[30005];
    int k, numsSize, i;
    scanf("%d %d", &numsSize, &k);
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    } 
    int ans = numSubarrayProductLessThanK(nums, numsSize, k);
    printf("%d", ans);
}