#include <stdio.h>

int main() {
    double x = 0.0;
    
    scanf("%lf", &x);

    if (x >= 0) {
        printf("%.2lf", x);
    } else {
        x = -1.0 * x;
        printf("%.2lf", x);
    }

    return 0;
}