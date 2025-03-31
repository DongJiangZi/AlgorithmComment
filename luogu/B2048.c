#include <stdio.h>

int main() {
    int x = 0;
    char c = 0;

    scanf("%d %c", &x, &c);

    if (x <= 1000) {
        if (c == 'y') {
            printf("13");
        } else {
            printf("8");
        }
    } else {
        if (c == 'y') {
            printf("%d", 8 + ((x - 1000) / 500 + !!((x - 1000) % 500)) * 4 + 5);
        } else {
            printf("%d", 8 + ((x - 1000) / 500 + !!((x - 1000) % 500)) * 4);
        }
    }
    return 0;
}