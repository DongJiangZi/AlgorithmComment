#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    char c = 0;

    scanf("%d %d %c", &x, &y, &c);

    switch (c)
    {
    case '+':
        printf("%d", x + y);
        break;
    case '-':
        printf("%d", x - y);
        break;
    case '*':
        printf("%d", x * y);
        break;
    case '/':
        if (y == 0) {
           printf("Divided by zero!");
        } else {
            printf("%d", x / y);
        }
        break;
    default:
        printf("Invalid operator!");
        break;
    }
    return 0;
}