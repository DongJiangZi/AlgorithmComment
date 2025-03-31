#include <stdio.h>

int main() {
    int a1 = 0;
    int a2 = 0;
    int n = 0;
    int i = 0;
    int d = 0;
    
    scanf("%d %d %d", &a1, &a2, &n);

    d = a2 - a1;

    for (i = 0; i < n - 1; i++) {
        a1 += d;
    }

    printf("%d", a1);

    return 0;
}