#include <stdio.h>

int main() {
    double f = 0.0;
    double c = 0.0;

    scanf("%lf", &f);

    c = 5.0 * (f - 32.0) / 9.0;

    printf("%.5lf", c);
    return 0;
}