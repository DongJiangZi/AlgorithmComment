#include <stdio.h>

int i = 0, a[7] = {0}, b[7] = {0}, num = 0, flag = 0;

int main() {
    for(i = 0; i < 7; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for(i = 6; i >= 0; i--) {
        if(a[i] + b[i] > 8 && a[i] + b[i] >= num) {
            num = a[i] + b[i];
            flag = i + 1;
        }
    }
    printf("%d", flag);
    return 0;
}