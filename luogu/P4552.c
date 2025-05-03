#include <stdio.h>

int n, i;
int arr[100005], barr[100005];

int main() {
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        barr[i] = arr[i] - arr[i - 1];
    }
    
    

    return 0;
}