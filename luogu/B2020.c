#include <stdio.h>

int main() {
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int s4 = 0;
    int s5 = 0;
    int s2e = 0;

    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    s2 += s1 / 3; 
    s5 += s1 / 3;
    s2e += s1 % 3;
    s1 /= 3;

    s1 += s2 / 3; 
    s3 += s2 / 3;
    s2e += s2 % 3;
    s2 /= 3;

    s2 += s3 / 3; 
    s4 += s3 / 3;
    s2e += s3 % 3;
    s3 /= 3;

    s3 += s4 / 3; 
    s5 += s4 / 3;
    s2e += s4 % 3;
    s4 /= 3;

    s1 += s5 / 3; 
    s4 += s5 / 3;
    s2e += s5 % 3;
    s5 /= 3;

    printf("%d %d %d %d %d\n%d", s1, s2, s3, s4, s5, s2e);

    return 0;
}