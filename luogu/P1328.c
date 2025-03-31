#include <stdio.h>

int main() {
    int n = 0;
    int n_a = 0;
    int n_b = 0;
    int n_a_n[200] = {0};
    int n_b_n[200] = {0};
    int cnt_a = 0;
    int cnt_b = 0;
    int x = 0;
    int y = 0;

    scanf("%d %d %d", &n, &n_a, &n_b);

    int i = 0;
    for(i = 0; i < n_a; i++) {
        scanf("%d", &n_a_n[i]);
    }
    for(i = 0; i < n_b; i++) {
        scanf("%d", &n_b_n[i]);
    }

    for(i = 1; i <= n; i++) {
        if((n_a_n[x] == 0 && n_b_n[y] == 1)
        || (n_a_n[x] == 0 && n_b_n[y] == 4)
        || (n_a_n[x] == 1 && n_b_n[y] == 4)
        || (n_a_n[x] == 1 && n_b_n[y] == 2)
        || (n_a_n[x] == 2 && n_b_n[y] == 3)) {
            cnt_b++;
        }

        if((n_b_n[y] == 0 && n_a_n[x] == 1)
        || (n_b_n[y] == 0 && n_a_n[x] == 4)
        || (n_b_n[y] == 1 && n_a_n[x] == 4)
        || (n_b_n[y] == 1 && n_a_n[x] == 2)
        || (n_b_n[y] == 2 && n_a_n[x] == 3)) {
            cnt_a++;
        }

        if((n_a_n[x] == 0 && n_b_n[y] == 2)
        || (n_a_n[x] == 0 && n_b_n[y] == 3)
        || (n_a_n[x] == 1 && n_b_n[y] == 3)
        || (n_a_n[x] == 2 && n_b_n[y] == 4)
        || (n_a_n[x] == 3 && n_b_n[y] == 4)) {
            cnt_a++;
        }

        if((n_b_n[y] == 0 && n_a_n[x] == 2)
        || (n_b_n[y] == 0 && n_a_n[x] == 3)
        || (n_b_n[y] == 1 && n_a_n[x] == 3)
        || (n_b_n[y] == 2 && n_a_n[x] == 4)
        || (n_b_n[y] == 3 && n_a_n[x] == 4)) {
            cnt_b++;
        }

        x = (x + 1) % n_a;
        y = (y + 1) % n_b;
    }

    printf("%d %d", cnt_a, cnt_b);

    return 0;
}