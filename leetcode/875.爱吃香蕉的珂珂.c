/*
 * @lc app=leetcode.cn id=875 lang=c
 *
 * [875] 爱吃香蕉的珂珂
 */

// @lc code=start
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int getTime(int* piles, int pilesSize, int mid) {
    long time = 0;
    for(int i = 0; i < pilesSize; i++) {
        time += (piles[i] + mid - 1) / mid;
    }
    return time;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int l = 1, r = 0, mid, ans;
    for(int i = 0; i < pilesSize; i++) {
        r = MAX(r, piles[i]);
    }
    while(l <= r) {
        mid = (l + r) / 2;
        long time = getTime(piles, pilesSize, mid);
        if(time < h) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        
    }
    return ans;
}
// @lc code=end

