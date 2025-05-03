/*
 * @lc app=leetcode.cn id=2485 lang=c
 *
 * [2485] 找出中枢整数
 */

// @lc code=start
int pivotInteger(int n) {
    int SUM = n * (n + 1) / 2, i;
    int arr[1005], sum[1005];

    sum[0] = 0;
    for(i = 1; i <= n; i++) {
        arr[i] = i;
        sum[i] = sum[i - 1] + arr[i];
    }

    for(i = 1; i <= n; i++) {
        if(sum[i] == SUM - sum[i - 1]) {
            return i;
        }
    }
    return -1;
}
// @lc code=end

