#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;

    scanf("%d %d", &n, &m);

    if (n > 10 || m > 20) {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}