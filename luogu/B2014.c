#include <stdio.h>
#define PI 3.14159

int main() {
    double r = 0.0;
    double d = 0.0;
    double L = 0.0;
    double S = 0.0;

    scanf("%lf", &r);
    d = 2.0 * r;
    L = 2.0 * PI * r;
    S = PI * r * r;

    printf("%.4lf %.4lf %.4lf", d, L, S);
    return 0;
}