#include <stdio.h>
char arr[15];
int i = 0;
int sum = 0;
int flag = 1;

int main(){
    for(i = 0; i < 13; i++){
        scanf("%c", &arr[i]);
    }
    for(i = 0; i < 11; i++) {
        if(i == 1 || i == 5) {
            continue;
        }
        sum += (arr[i] - '0') * flag;
        flag++;
    }

    if(sum % 11 != 10) {
        if(sum % 11 == arr[12] - '0') {
            printf("Right");
        } else {
            arr[12] = sum % 11 + '0';
            for(i = 0; i < 13; i++) {
                printf("%c", arr[i]);
            }
        }
    } else {
        if(arr[12] == 'X') {
            printf("Right");
        } else {
            arr[12] = 'X';
            for(i = 0; i < 13; i++) {
                printf("%c", arr[i]);
            }
        }
    }
    return 0;
}