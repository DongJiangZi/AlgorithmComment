#include <stdio.h>

int main(){
    char num_arr[41] = {0};
    char num_1_arr[19] = {0};
    char num_2_arr[19] = {0};
    int num_3_arr[19] = {0};
    int num_len = 0;
    int num_1_len = 0;
    int num_2_len = 0;
    int i = 0;
    int flag = 0;

    for (i = 0; i < 19; i++) {
        num_1_arr[i] = '0';
        num_2_arr[i] = '0';
    }


    fgets(num_arr, 40, stdin);

    for (i = 0; i < 40; i++) {
        if (num_arr[i] == '\n') {
            num_len = i;
            break;
        }
    }

    for (i = num_len - 1; i >= 0; i--) {
        if (num_arr[i] == ' ') {
            flag = 1;
            i--;
        }

        if(flag == 0) {
            num_2_arr[18 - num_2_len] = num_arr[i];
            num_2_len++;
        } else {
            num_1_arr[18 - num_1_len] = num_arr[i];
            num_1_len++;
        }
    }

    for (i = 18; i >= 0; i--) {
        //printf("%d\n", num_1_arr[i] - '0' + num_2_arr[i] - '0');
        if (num_1_arr[i] - '0' + num_2_arr[i] - '0' < 10) {
            num_3_arr[i] += num_1_arr[i] - '0' + num_2_arr[i] - '0';
        } else {
            num_3_arr[i] += num_1_arr[i] - '0' + num_2_arr[i] - '0' - 10;
            num_3_arr[i-1]++;
        }
    }

    flag = 0;

    for (i = 0; i < 19; i++) {
        //printf("%d\n", num_3_arr[i]);
        if (num_3_arr[i] != 0) {
            flag = i;
            break;
        }
    }

    for (i = flag; i < 19; i++){
        printf("%d", num_3_arr[i]);
    }

    return 0;
}