/*
    从输入整数开始倒数到0
*/

#include <stdio.h>

int main(void){
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d ", no);
        no--;                   /*no值递减*/
    }
    putchar('\n');              /*输入完成后换行*/

    return (0);
}
