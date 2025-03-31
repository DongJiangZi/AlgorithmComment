#include <stdio.h>
#define PI 3.14

int main() {
    int h = 0;
    int r = 0;
    int n = 0;
    double V = 0.0;

    scanf("%d %d", &h, &r);

    V = PI * r / 10 * r / 10 * h / 10;

    n = 20 / V + 1;

    printf("%d", n);

    return 0;
}