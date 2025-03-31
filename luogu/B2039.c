#include <stdio.h>

int main() {
    long long x = 0;
    long long y = 0;
    
    scanf("%lld %lld", &x, &y);

    if (x > y) {
        printf(">");
    } else if (x == y) {
        printf("=");
    } else {
        printf("<");
    }

    return 0;
}