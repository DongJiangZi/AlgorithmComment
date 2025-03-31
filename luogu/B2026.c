#include <stdio.h>

int main() {
    double a = 0.0;
    double b = 0.0;
    int c = 0;
    double r = 0.0;

    scanf("%lf %lf", &a, &b);
  
    c = a / b;

    r = a - c * b;

    printf("%lf", r);

    return 0;
}