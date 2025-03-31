#include <stdio.h>

int main() {
    long long n = 0;

    scanf("%lld", &n);

    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }
    return 0;
}