#include <stdio.h>
#include <math.h>

int main() {
    short x = 0; 
    short a = 0;
    short y = 0;
    short b = 0;
    double z = 0.0;

    scanf("%hd %hd %hd %hd", &x, &a, &y, &b);

    z = abs(x * a - y * b)/(1.0 * abs(a - b));

    printf("%.2lf", z);

    return 0;
}