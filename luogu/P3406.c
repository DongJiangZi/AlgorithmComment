#include <stdio.h>

int n, m, i, idx1, idx2, a, b, c;
long SUM;
int arr[100005];
long long sum[100005];

int main() {
    scanf("%d %d", &n, &m);
    scanf("%d", &idx1);
    for(i = 2; i <= m; i++) {
        scanf("%d", &idx2);
        if(idx1 < idx2) {
            arr[idx1]++;
            arr[idx2]--;
        } else {
            arr[idx1]--;
            arr[idx2]++;
        }
        idx1 = idx2;
    }

    for(i = 1; i <= n - 1; i++) {
        sum[i] = sum[i - 1] + arr[i];
        scanf("%d %d %d", &a, &b, &c);
        if(sum[i] * b + c < a * sum[i]) {
            SUM += sum[i] * b + c;
        } else {
            SUM += a * sum[i];
        }
    }

    printf("%ld", SUM);

    return 0;
}