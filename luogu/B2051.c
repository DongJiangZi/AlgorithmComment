#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;

    scanf("%d %d", &x, &y);

    if (x <= 1 && x >= -1 && y <= 1 && y >= -1) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}