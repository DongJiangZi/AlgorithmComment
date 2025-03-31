#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 0;
    int c = 0;
    bool b = 0;

    scanf("%d", &a);

    b = a;
    c = b;

    printf("%d", c);

    return 0;
}