#include <stdio.h>
#include <string.h>

int n, q, i, m, l, r, idx = 0;
char s[10000005];
int arr[10000005];
int sum[10000005];
int pr[10000005];

int main() {
    scanf("%d", &n);
    while(n) {
        scanf("%s", s);
        m = strlen(s);

        for(i = 0; i < m; i++) {
            if(s[i] == 'P') {
                arr[i + 1] = 3;
            } else if(s[i] == 'p') {
                arr[i + 1] = 2;
            } else if(s[i] == 'G') {
                arr[i + 1] = 1;
            } else {
                arr[i + 1] = 0;
            }
        }

        sum[1] = arr[1];
        for(i = 2; i <= m; i++) {
            sum[i] = sum[i - 1] + arr[i];
        }

        scanf("%d", &q);
        for(i = 1; i <= q; i++) {
            scanf("%d %d", &l, &r);
            pr[idx] = sum[r] - sum[l - 1];
            idx++;
        }
        n--;
    }

    for(i = 0; i < idx; i++) {
        printf("%d\n", pr[i]);
    }
    return 0;
}