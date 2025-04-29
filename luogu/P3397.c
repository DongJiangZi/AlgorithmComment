#include <stdio.h>

int n, m, lx, ly, rx, ry, i, j;
int arr[1005][1005], b[1005][1005];

int main() {
    scanf("%d %d", &n, &m);
    for(i = 1; i <= m; i++) {
        scanf("%d %d %d %d", &lx, &ly, &rx, &ry);
        b[lx][ly]++;
        b[lx][ry + 1]--;
        b[rx + 1][ly]--;
        b[rx + 1][ry + 1]++;
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <=n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1] + b[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}