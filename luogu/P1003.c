#include <stdio.h>

int main() {
    int n = 0;
    int pt_a[10000] = {0};
    int pt_b[10000] = {0};
    int pt_g[10000] = {0};
    int pt_k[10000] = {0};
    int x = 0;
    int y = 0;
    int ans = -1;

    scanf("%d", &n);

    int i = 0;
    for(i = 0; i < n; i++) {
        scanf("%d %d %d %d", 
        &pt_a[i], &pt_b[i], &pt_g[i], &pt_k[i]);
    }
    
    scanf("%d %d", &x, &y);

    for(i = 0; i < n; i++) {
        if(x >= pt_a[i]
        && x <= pt_a[i] + pt_g[i]
        && y >= pt_b[i]
        && y <= pt_b[i] + pt_k[i]) {
            ans = i + 1;
        }
    }

    printf("%d", ans);
    return 0;
}