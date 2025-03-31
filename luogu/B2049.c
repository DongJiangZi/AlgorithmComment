#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z) {
        printf("%d", x);
    } else if (y > x && y > z) {
        printf("%d", y);
    } else {
        printf("%d", z);
    }
    return 0;
}