#include <stdio.h>

int n, m, i, l, r;
int arr[100005], sum[100005], num[100005];

int main() {
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    sum[1] = arr[1];
    for(i = 2; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d %d", &l, &r);
        num[i] = sum[r] - sum[l - 1];
    }

    for(i = 0; i < m; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}