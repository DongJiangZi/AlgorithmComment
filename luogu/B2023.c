#include <stdio.h>

int main() {
    char c = 0;
    int i = 0;
    float f = 0.0f;
    double d = 0.0;

    scanf("%c%d%f%lf", &c, &i, &f, &d);

    printf("%c %d %f %lf", c, i, f, d);
    
    return 0;
}