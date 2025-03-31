#include <stdio.h>

int main() {
    char c = 0;
    int c_int = 0;

    scanf("%c", &c);

    c_int = c;

    if (c_int % 2 == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}