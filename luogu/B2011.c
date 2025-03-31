#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    double c = 0.0;

    scanf("%d %d", &a, &b);

    c = (a * 1.0)/(b * 1.0);

    printf("%.9lf", c);

    return 0;
}