#include <stdio.h>

int main() {
    int n = 0;
    int first = 0;
    int second = 0;
    int third = 0;
    
    scanf("%d", &n);

    first = n / 100;
    second = n % 100 / 10;
    third = n % 10;

    printf("%d%d%d", third, second, first);

    return 0;
}