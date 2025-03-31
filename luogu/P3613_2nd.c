#include <stdio.h>
#include <stdlib.h>

typedef struct cabinet {
    int j;
    int k;
    struct cabinet* next;
} cab;

cab** init_cabinet(int n) {
    cab** p = (cab**)malloc(n * sizeof(cab*));
    for (int i = 0; i < n; i++) {
        p[i] = NULL;
    }
    return p;
}

cab* init_package() {
    cab* p = (cab*)malloc(sizeof(cab));
    p -> j = 0;
    p -> k = 0;
    p -> next = NULL;
    return p;
}

void insert_package(int j, int k, cab* p) {
    cab* s = (cab*)malloc(sizeof(cab));
    s -> j = j;
    s -> k = k;
    s -> next = p -> next;
    p -> next = s;
}

void store (int i, int j, int k, cab** Cab) {
    if (Cab[i] == NULL) {
        Cab[i] = init_package();
    }
    insert_package(j, k, Cab[i]);
}

int inquire_package(int i, int j, cab** Cab) {
    cab* p = Cab[i] -> next;
    while (p != NULL) {
        if(p -> j == j) {
            return p -> k;
        } else {
            p = p -> next;
        }
    }
}

int main() {
    int n = 0;
    int q = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    int count = 0;

    scanf("%d %d", &n, &q);

    cab** Cab = init_cabinet(n);
    int* pr_pack = (int*)malloc(q * sizeof(int));

    for (int x = 0; x < q; x++) {
        scanf("%d", &flag);
        if (flag == 1) {
            scanf("%d %d %d", &i, &j, &k);
            store(i, j, k, Cab);
        } else {
            scanf("%d %d", &i, &j);
            pr_pack[count] = inquire_package(i, j, Cab);
            count++;
        }
    }

    for (int x = 0; x < count; x++) {
        printf("%d\n", pr_pack[x]);
    }

    return 0;
}