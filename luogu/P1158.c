#include <stdio.h>
int x_1, y_1, x_2, y_2, x, y, n, 
    i, j, d1[100005], d2[100005] = {0}, tmp, 
    max1, max2 = 0, min = 4000000;

int main() {
    scanf("%d %d %d %d %d", &x_1, &y_1, &x_2, &y_2, &n);

    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        d1[i] = (x - x_1) * (x - x_1) + (y - y_1) * (y - y_1);
        d2[i] = (x - x_2) * (x - x_2) + (y - y_2) * (y - y_2);
    }

    if(n == 1) {
        if(d1[0] < d2[0]) {
            printf("%d", d1[0]);
        } else {
            printf("%d", d2[0]);
        }
    } else {
        for(i = 0; i < n - 1; i++) {
            for(j = 0; j < n - i - 1; j++) {
                if(d1[j] > d1[j + 1]) {
                    tmp = d1[j];
                    d1[j] = d1[j + 1];
                    d1[j + 1] = tmp;
                    tmp = d2[j];
                    d2[j] = d2[j + 1];
                    d2[j + 1] = tmp;
                }
            }
        }
    
        for(i = n - 1; i >= 0; i--) {
            max1 = d1[i];
            if(max2 < d2[i + 1]) {
                max2 = d2[i + 1];
            }
            if(max1 + max2 < min) {
                min = max1 + max2;
            }
        }
    
        printf("%d", min);
    }

    return 0;
}