#include <stdio.h>

char s[20] = {0};
int i = 0;

int main() {
    fgets(s, 10, stdin);
    for(i = 4; i >= 0; i--) {
        printf("%c", s[i]);
    }
    return 0;
}