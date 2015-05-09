/*
    逆向显示输入的非负整数（第二版）
*/

#include <stdio.h>

int main(void){
    int num;

    do {
        printf("请输入一个非负整数：");
        scanf("%d", &num);
        if (num < 0)
            puts("\a请不要输入负整数。");
    } while (num < 0);                  /*当num大于等于0时才执行下一步*/

    printf("%d逆向显示的结果是", num);
    do {
        printf("%d", num % 10);         /*每次显示num的最后一位*/
        num = num / 10;                 /*将num按十进制右移一位*/
    } while (num > 0);
    puts("。");

    return (0);
}
