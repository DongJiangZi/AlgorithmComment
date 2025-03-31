#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double x3 = 0.0;
    double y3 = 0.0;
    double d1 = 0.0;
    double d2 = 0.0;
    double d3 = 0.0;
    double p = 0.0;
    double S = 0.0;

    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    d1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    d2 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    d3 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));

    p = (d1 + d2 + d3) / 2;

    S = sqrt(p * (p - d1) * (p - d2) * (p - d3));

    printf("%.2f", S);

    return 0;
}