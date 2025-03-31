#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}