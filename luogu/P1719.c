#include <stdio.h>

int n, i, j, SUM, maxx = 0, x, y;
int map[125][125], sum[125][125];

int main() {
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++){
            scanf("%d",&map[i][j]);
        }
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++){
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + map[i][j];
        }
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            for(x = 1; x <= i; x++) {
                for(y = 1; y <= j; y++){
                    SUM = sum[i][j] - sum[x - 1][j] - sum[i][y - 1] + sum[x - 1][y - 1];
                    if(SUM > maxx) {
                        maxx = SUM;
                    }
                }
            }
        }
    }

    printf("%d", maxx);
    
    return 0;
}