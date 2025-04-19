#include <stdio.h>
int n;
int m;
int i;
int j;
int p;
int q;
int minn;
int flag = 0;
int map[102][102];

int check(int n_tmp,int m_tmp, int len) {
    int flag_tmp = 1;
    for(p = n_tmp; p <= n_tmp + len - 1; p++) {
        for(q = m_tmp; q <= m_tmp + len - 1; q++) {
            if(map[p][q] == 0) {
                flag_tmp = 0;
                goto over_tmp;
            }
        }
    }
    over_tmp:
    return flag_tmp;
}

int main() {
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    if(n < m) {
        minn = n;
    } else {
        minn = m;
    }

    while(1) {
        for(i = 1; i <= n - minn + 1; i++) {
            for(j = 1; j <= m - minn + 1; j++) {
                flag = check(i, j, minn);
                if(flag == 1) {
                    goto over;
                }
            }
        }
        minn--;
    }
    over:
    printf("%d", minn);
    
    return 0;
}