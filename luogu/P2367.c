#include <stdio.h>

int n, p, i, x, y, z, minn = 5e8;
int grade[5000005], arr[5000005];

int main() {
    scanf("%d %d", &n, &p);
    for(i = 1; i <= n; i++) {
        scanf("%d", &grade[i]);
    }

    for(i = 1; i <= n; i++) {
        arr[i] = grade[i] - grade[i - 1];
    }

    for(i = 0; i < p; i++) {
        scanf("%d %d %d", &x, &y, &z);
        arr[x] += z;
        arr[y + 1] -= z;
    }
    
    for(i = 1; i <= n; i++) {
        grade[i] = grade[i - 1] + arr[i];
        if(grade[i] < minn) {
            minn = grade[i];
        }
    }

    printf("%d", minn);
    return 0;
}