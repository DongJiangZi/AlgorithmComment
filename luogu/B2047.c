#include <stdio.h>

int main() {
    double x = 0.0;

    scanf("%lf", &x);

    if(x < 5) {
        printf("%.3lf", -1.0 * x + 2.5);
    } else if (x < 10) {
        printf("%.3lf", 2.0 - 1.5 * (x - 3.0) * (x - 3.0));
    } else {
        printf("%.3lf", x / 2.0 - 1.5);
    }
    
    return 0;
}