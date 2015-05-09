/*
    输入正整数,循环显示1234567890,显示位数和输入的整数值相同
*/

#include <stdio.h>

int main(void){
    int num, i;
    
    do {
        printf("请输入一个正整数:");    scanf("%d", &num);
        if (num <= 0)
            puts("\a请输入正整数。");
    } while (num <= 0);

    return (0);
}
