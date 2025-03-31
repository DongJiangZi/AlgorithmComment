#include <stdio.h>

int n = 0;
int m = 0;
long stu_num_arr[2000000] = {0};
int ask_num[100000] = {0};
int i = 0;

int main() {
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++) {
        scanf("%ld", &stu_num_arr[i]);
    }

    for(i = 0; i < m; i++) {
        scanf("%d", &ask_num[i]);
    }

    for(i = 0;i < m; i++) {
        printf("%ld\n", stu_num_arr[ask_num[i]-1]);
    }

    return 0;
}