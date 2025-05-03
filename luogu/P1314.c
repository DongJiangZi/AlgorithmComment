#include <stdio.h>

int n, m, i, j, l, r, k = 0;
long s;
int w[200005], v[200005], w_tmp[200005], v_tmp[200005];

int main() {
    scanf("%d %d %ld", &n, &m, &s);

    for(i = 1; i <= n; i++) {
        scanf("%d %d", &w[i], &v[i]);
    }

    for(i =  1; i <= m; i++) {
        scanf("%d %d", &l, &r);
        for(j = l; j <= r; j++) {
            k++;
            w_tmp[k] = w[j];
            v_tmp[k] = v[j];
        }

        for(p = 1; p < k; p++) {
            for
        }
    }

    return 0;
}