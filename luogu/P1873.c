#include <stdio.h>

int n, m, h, max = -1, l, r, mid;
long sum;
int tree[1000005];

int main() {
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &tree[i]);
        if(tree[i] > max) {
            max = tree[i];
        }
    }

    l = 0;
    r = max;

    while(l <= r) {
        sum = 0;
        mid = (l + r) / 2;
        for(int i = 1; i <= n; i++) {
            if(tree[i] - mid > 0)
            sum += tree[i] - mid;
        }
        if(sum >= m) {
            h = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    printf("%d", h);
    return 0;
}