#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    double money = a *1.0 + b * 0.1;
    int n = money / 1.9;
    printf("%d", n);
    return 0;
}