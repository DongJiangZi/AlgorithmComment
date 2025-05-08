/*
 * @lc app=leetcode.cn id=2379 lang=c
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
int minimumRecolors(char* blocks, int k) {
    int inbl[100];
    int i, ans, n = strlen(blocks), r = 0, l = 0, sum = 0;
    for(i = 0; i < n; i++) {
        if(blocks[i] == 'W') {
            inbl[i] = 0;
        } else {
            inbl[i] = 1;
        }
    }
    while(r < n) {
        sum += inbl[r];
        while(r - l > 6 && ) {
            l++;
        }
        r++;
    }
    return ans;
}
// @lc code=end

