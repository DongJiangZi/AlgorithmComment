#include <stdio.h>

int a, b, c, d, e, f;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    e = c - a;
    if(b > d) {
        e--;
        f = 60 + d - b;
    } else {
        f = d - b;
    }
    printf("%d %d", e, f);
    return 0;
}