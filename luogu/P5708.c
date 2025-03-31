#include <stdio.h>
#include <math.h>

double a, b, c, p, s;

int main() {
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b +c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", s);
    return 0;
}