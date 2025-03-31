#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (pow(b, 2) - 4 * a * c > 0) {
        double x_1 = (-1.0 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        double x_2 = (-1.0 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        if (x_1 < x_2) {
            printf("x1=%.5lf;x2=%.5lf", x_1, x_2);
        } else {
            printf("x1=%.5lf;x2=%.5lf", x_2, x_1);
        }
        
    } else if (pow(b, 2) - 4 * a * c == 0) {
        double x = (-1.0 * b) / (2 * a);
        printf("x1=x2=%.5lf", x);
    } else {
        printf("No answer!");
    }
    
    return 0;
}