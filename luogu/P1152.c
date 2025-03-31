#include <stdio.h>
#include <stdlib.h>

int n = 0, i = 0, arr[1005] = {0}, min = 1, max = 0, flag = 0;

int main() {
    scanf("%d", &n);
    max = n - 1;
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(abs(arr[i] - arr[i + 1]) < min 
        || abs(arr[i] - arr[i + 1]) > max) {
            flag = 1;
            break;
        }
    }

    if(flag) {
        printf("Not jolly");
    } else {
        printf("Jolly");
    }
    return 0;
}