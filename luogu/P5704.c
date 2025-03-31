#include <stdio.h>
char c = 0;

int main() {
    scanf("%c", &c);
    printf("%c", c + 'A' - 'a');
    return 0;
}