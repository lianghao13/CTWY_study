/*
    逆向显示输入的非负整数（复合赋值运算版）
*/

#include <stdio.h>

int main(void){
    int num;

    do {
        printf("请输入一个非负整数：");
        scanf("%d", &num);
        if (num < 0)
            puts("\a请不要输入负整数。");
    } while (num < 0);

    printf("该整数逆向显示的结果是");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    puts("。");

    return (0);
}
