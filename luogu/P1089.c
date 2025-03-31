#include <stdio.h>

int budget[12] = {0}, remainder = 0, storage = 0, i = 0, flag = 0, money = 0;

int main() {
    for(i = 0; i < 12; i++) {
        scanf("%d", &budget[i]);
    }
    for(i = 0; i < 12; i++) {
        money = remainder + 300;
        if(money < budget[i]) {
            flag = 1;
            break;
        }
        storage += (money - budget[i]) / 100 * 100;
        remainder = money - ((money - budget[i]) / 100 * 100) - budget[i];
    }

    if(flag) {
        printf("%d", -1 * (i + 1));
    } else {
        printf("%.0lf", storage * 1.2 + remainder);
    }
    return 0;
}