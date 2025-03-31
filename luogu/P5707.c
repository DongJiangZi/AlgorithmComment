#include <stdio.h>
#include <math.h>

int s, v, time, h, m;

int main() {
    scanf("%d %d", &s, &v);
    time = ceil((s * 1.0) / (v * 1.0));
    h = 7 - (time + 10) / 60;
    if(h < 0) {
        h += 24;
    }
    m = 60 - (time + 10) % 60;
    printf("%02d:%02d", h, m);
    return 0;
}