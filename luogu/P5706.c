#include <stdio.h>

double v;
int n;

int main() {
    scanf("%lf %d", &v, &n);
    printf("%.3lf\n%d", v / n, n * 2);
    return 0;
}