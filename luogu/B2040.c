#include <stdio.h>

int main() {
    int n = 0;
    
    scanf("%d", &n);

    if (n >= 10 && n <= 99) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}