#include <stdio.h>

int main() {
    int chinese = 0;
    int math = 0;
    int english = 0;

    scanf("%d %d %d", &chinese, &math, &english);

    if (chinese < 60 && math >= 60 && english >= 60) {
        printf("1");
    } else if (chinese >= 60 && math < 60 && english >= 60) {
        printf("1");
    } else if (chinese >= 60 && math >= 60 && english < 60) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}