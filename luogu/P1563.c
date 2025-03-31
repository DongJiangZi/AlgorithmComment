#include <stdio.h>

typedef struct People{
    int dir;
    char name[15];
}peo;

peo p[100005];
int n, m, i;

int main() {
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++) {
        scanf("%d %s", &p[i].dir, p[i].name);
    }
    printf("%d %s", p[0].dir, p[0].name);
    return 0;
}