#include <stdio.h>

int n, m, i, j, flag = 1;
int sum[1000005], arr[1000005], d[1000005], s[1000005], t[1000005];

int main() {
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++) {
        scanf("%d", &sum[i]);
    }

    for(i = 1; i <= n; i++) {
        arr[i] = sum[i] - sum[i - 1];
    }

    for(i = 0; i < m; i++) {
        scanf("%d %d %d", &d[i], &s[i], &t[i]);
    }

    for(i = 0; i < m; i++) {
        arr[s[i]] -= d[i];
        arr[t[i] + 1] += d[i];
        for(j = 1; j <= n; j++) {
            sum[j] = sum[j - 1] + arr[j];
            if(sum[j] < 0) {
                flag = 0;
                goto over;
            }
        }
    }

    over:
    if(flag == 0) {
        printf("-1\n%d", i + 1);
    } else {
        printf("0");
    }
    
    return 0;
}