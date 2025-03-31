#include <stdio.h>

int main() {
    int grade = 0;

    scanf("%d", &grade);

    if (grade == 1 || grade == 3 || grade == 5) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}