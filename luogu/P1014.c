#include <stdio.h>

//变量初始化
int num = 0, left = 1, right = 1, con = 1, i = 0;

int main() {
    scanf("%d", &num);
    
    //计算所求数据所处轮次
    while(num - con > 0) {
        num -= con;//6 4 1
        con++;//2 3 4
    }

    //根据数学规律计算答案
    if(con % 2) {
        left = con;
        right = 1;
        for(i = 1; i < num; i++) {
            left--;
            right++;
        }
    } else {
        left = 1;
        right = con;
        for(i = 1; i < num; i++) {
            left++;
            right--;
        }
    }

    printf("%d/%d", left, right);    
    return 0;
}