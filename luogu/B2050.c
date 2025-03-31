#include <stdio.h>
#include <math.h>

int main() {
    int x = 0;
    int y = 0;
    int z = 0;

    scanf("%d %d %d", &x, &y, &z);

    if (x + y > z && x + z > y && z + y > x && abs(x - y) < z && abs(x - z) < y && abs(z - y) < x) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}