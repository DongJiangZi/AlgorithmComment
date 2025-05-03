/*
 * @lc app=leetcode.cn id=1422 lang=c
 *
 * [1422] 分割字符串的最大得分
 */

// @lc code=start
int maxScore(char* s) {
    int i, maxx = 0, SUM;
    int arr_left[505], arr_right[505], sum_left[505], sum_right[505];
    for(i = 0; i < strlen(s); i++) {
        if(s[i] == '0') {
            arr_left[i + 1] = 1;
            arr_right[strlen(s) - i] = 0;
        } else {
            arr_left[i + 1] = 0;
            arr_right[strlen(s) - i] = 1;
        }
    }

    sum_left[0] = 0;
    sum_right[0] = 0;
    for(i = 1; i <= strlen(s); i++) {
        sum_left[i] = sum_left[i - 1] + arr_left[i];
        sum_right[i] = sum_right[i - 1] + arr_right[i];
    }

    for(i = 1; i < strlen(s); i++) {
        SUM = sum_left[i] + sum_right[strlen(s) - i];
        if(SUM > maxx) {
            maxx = SUM;
        }
    }
    return maxx;
}
// @lc code=end

