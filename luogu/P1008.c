#include <stdio.h>

int i = 0;
int flag[10] = {0};
int j = 0;
int k = 0;
int x = 0;

int check(int num) {
    int n1 = num % 10;
    int n2 = num / 10 % 10;
    int n3 = num / 100;

    if((flag[n1] != 0 || flag[n2] != 0 || flag[n3] != 0)
    || (n1 == 0 || n2 == 0 || n3 == 0)
    || (n1 == n2 || n1 == n3 || n2 == n3)) {
        return 0;
    }

    flag[n1] = n1;
    flag[n2] = n2;
    flag[n3] = n3;
    return 1; //表示无重复数字
}

int main() {
    for(i = 123; i <= 329; i++){
        for(j = 1; j <= 3; j++) {
            int t = check(i * j);
            if (t == 0) {
                break;
            } else {
                x++;
            }
        }
        if(x == 3) {
            printf("%d %d %d\n", i, i * 2, i * 3);
        }
        for(k = 1; k < 10; k++) {
            flag[k] = 0;
        }
        x = 0;
    }
    return 0;
}