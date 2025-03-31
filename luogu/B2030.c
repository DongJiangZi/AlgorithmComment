#include <stdio.h>
#include <math.h>

int main() {
    double xa = 0.0;
    double ya = 0.0;
    double xb = 0.0;
    double yb = 0.0;
    double d = 0.0;

    scanf("%lf %lf %lf %lf", &xa, &ya, &xb, &yb);

    d = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));

    printf("%.3lf", d);

    return 0;
}