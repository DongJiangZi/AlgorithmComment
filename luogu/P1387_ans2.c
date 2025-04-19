#include <stdio.h>

int n, m, i, j, l, ans;
int map[105][105], sum[105][105];

int main() {
    for(i = 0; i < 105; i++) {
        for(j = 0; j < 105; j++) {
            map[i][j] = 0;
        }
    }

    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    sum[1][1] = map[1][1];
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] -sum[i - 1][j - 1] + map[i][j];

        }
    }

    if(n < m) {
        l = n;
    } else {
        l = m;
    }

    while(l) {
        for(i = l; i <= n; i++) {
            for(j = l; j <= m; j++){
                ans = sum[i][j] - sum[i - l][j] - sum[i][j - l] + sum[i - l][j - l];
                if(ans == l * l) {
                    goto over;
                }
            }
        }
        l--;
    }
    over:
    printf("%d", l);
    return 0;
}