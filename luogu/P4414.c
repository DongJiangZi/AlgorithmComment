#include <stdio.h>
int a, b, c, i, tmp;
char arr[3];

int main() {
    scanf("%d %d %d", &a, &b, &c);
    getchar();
    scanf("%c%c%c", &arr[0], &arr[1], &arr[2]);
    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    for(i = 0; i < 3; i++) {
        if(arr[i] == 'A') {
            printf("%d", a);
        } else if(arr[i] == 'B') {
            printf("%d", b);
        } else if(arr[i] == 'C') {
            printf("%d", c);
        }
        if(i != 2){
            printf(" ");
        }
    }
    return 0;
}