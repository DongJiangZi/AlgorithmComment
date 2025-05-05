#include <stdio.h>

int n, q, i, l, r;
int nums[100005], sum1[100005], sum2[100005], sum3[100005], pr1[100005], pr2[100005], pr3[100005];

int main() {
    scanf("%d %d", &n, &q);

    for(i = 1; i <= n; i++) {
        scanf("%d", &nums[i]);
        switch (nums[i])
        {
        case 1:
            sum1[i] = sum1[i - 1] + 1;
            sum2[i] = sum2[i - 1];
            sum3[i] = sum3[i - 1];
            break;
        case 2:
            sum1[i] = sum1[i - 1];
            sum2[i] = sum2[i - 1] + 1;
            sum3[i] = sum3[i - 1];
            break;
        case 3:
            sum1[i] = sum1[i - 1];
            sum2[i] = sum2[i - 1];
            sum3[i] = sum3[i - 1] + 1;
            break;
        }
    }

    for(i = 1; i <= q; i++) {
        scanf("%d %d", &l, &r);
        pr1[i] = sum1[r] - sum1[l - 1];
        pr2[i] = sum2[r] - sum2[l - 1];
        pr3[i] = sum3[r] - sum3[l - 1];
    }

    for(i = 1; i <= q; i++) {
        printf("%d %d %d\n", pr1[i], pr2[i], pr3[i]);
    }
    return 0;
}