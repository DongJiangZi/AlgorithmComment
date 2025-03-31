#include <stdio.h>

int main() {
    int s = 0;
    double walk_t = 0.0;
    double bike_t = 0.0;

    scanf("%d", &s);

    walk_t = s / 1.2;
    bike_t = s / 3.0 + 50.0;
    if (walk_t > bike_t) {
        printf("Bike");
    } else if (walk_t < bike_t) {
        printf("Walk"); 
    } else {
        printf("All");
    }
    
    return 0;
}