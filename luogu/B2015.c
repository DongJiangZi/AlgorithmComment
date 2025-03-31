#include <stdio.h>

int main() {
    double r1 = 0.0;
    double r2 = 0.0;
    double R = 0.0;

    scanf("%lf %lf", &r1, &r2);

    R = 1.0 / ((1.0 / r1) + (1.0 / r2));

    printf("%.2lf", R);
    
    return 0;
}