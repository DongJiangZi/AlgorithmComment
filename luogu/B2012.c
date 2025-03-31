#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    double c = 0.0;
    char d = '%';

    scanf("%d %d", &a, &b);

    c = (b * 1.0) / (a * 1.0) * 100;

    printf("%.3lf%c", c, d);

    return 0;
}