#include <stdio.h>

int n, i;
long long SUM = 0;
int arr[200005];
long long sum[200005];

int main() {
    scanf("%d", &n);
    for(i = n; i >= 1; i--) {
        scanf("%d", &arr[i]);
    }

    sum[1] = arr[1];
    for(i = 2; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    for(i = 1; i <= n - 1; i++) {
        SUM += sum[i] * arr[i + 1];
    }
    printf("%lld", SUM);
    return 0;
}