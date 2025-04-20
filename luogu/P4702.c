#include <stdio.h>

int n, i;
int arr[100];
long long sum[100];

int main() 
{
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    sum[1] = arr[1];
    for(i = 2; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    if(sum[n] % 2 == 1) {
        printf("Alice");
    } else {
        printf("Bob");
    }
    return 0;
}