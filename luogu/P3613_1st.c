#include <stdio.h>
#include <stdlib.h>

void store(int i, int j, int k, int** p) {
    p[i] = (int*)malloc(j * sizeof(int));
    p[i][j] = k;
}

int inquire(int i, int j, int** p) {
    return p[i][j];
}

int** cabinet_init(int n) {
    int** p = (int**)malloc(n * sizeof(int*));
    return p;
}

int* inquire_reco(int q) {
    int* p = (int*)malloc(q * sizeof(int));
    return p;
}

int main() {
    int n = 0;
    int q = 0;
    int x = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    int count = 0;

    scanf("%d %d", &n, &q);

    int** p = cabinet_init(n);

    int* p_inq = inquire_reco(q);

    for (x = 0; x < q; x++) {
        scanf("%d", &flag);
        if (flag == 1) {
            scanf("%d %d %d", &i, &j, &k);
            store(i, j ,k, p);
        } else {
            scanf("%d %d", &i, &j);
            p_inq[count] = inquire(i, j ,p);
            count++;
        }
    }

    for(x = 0; x < count; x++) {
        printf("%d\n", p_inq[x]);
    }

    return 0;
}