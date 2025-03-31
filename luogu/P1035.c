#include <stdio.h>

int main() {
    int k = 0;
    int n = 2;
    double sum = 1.0;
    scanf("%d", &k);
    double k_tmp = 1.0 * k;
    while(1) {
        sum += 1.0 / n;
        if(sum > k_tmp) {
            break;
        }
        n++;
    }
    printf("%d", n);
    return 0;
}