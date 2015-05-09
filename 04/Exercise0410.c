/*
    显示小于输入整数的所有2的乘方
*/

#include <stdio.h>

int main(void){
    int i = 2;
    int num;

    do {
        printf("请输入一个正整数：");    scanf("%d", &num);
        if (num < 0)
            puts("\a请不要输入非正整数。");
    } while(num <= 0);

    while (i <= num) {
        printf("%4d,", i);
        i *= 2;    
    }
    putchar('\n');          //正常输出完成后换行

    return (0);
}
