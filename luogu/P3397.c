#include <stdio.h>

int m, n, i, j, x1, y_1, x2, y2, p, q;
int map[1000][1000];

void put(int x1_tmp, int y_1_tmp, int x2_tmp, int y2_tmp) {
    for(p = x1_tmp - 1; p < x2_tmp; p++) {
        for(q = y_1_tmp - 1; q < y2_tmp; q++) {
            map[p][q]++;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            map[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        scanf("%d %d %d %d", &x1 ,&y_1, &x2, &y2);
        put(x1, y_1, x2, y2);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}