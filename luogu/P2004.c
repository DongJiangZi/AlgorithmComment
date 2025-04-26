#include <stdio.h>

int n, m, l, i, j, x, y;
long long max = 0, SUM;
int map[1005][1005];
long long sum[1005][1005];

int main() {
    for(i = 0; i < 1005; i++) {
        for(j = 0; j < 1005; j++) {
            map[i][j] = 0;
        }
    }

    scanf("%d %d %d", &n, &m, &l);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    sum[1][1] = map[1][1];
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + map[i][j];
        }
    }
    
    for(i = 1; i + l - 1 <= n; i++) {
        for(j = 1; j + l -1 <= m; j++) {
            SUM = sum[i + l -1][j + l - 1] - sum[i - 1][j + l -1] - sum[i + l -1][j - 1] + sum[i - 1][j - 1];
            if(SUM > max) {
                max = SUM;
                x = i;
                y = j;
            }
        }
    }
    
    printf("%d %d", x, y);

    return 0;
}