/*
    从输入整数开始倒数到0（当输入负数时不换行）
*/

#include <stdio.h>

int main(void){
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no >= 0){
        while (no >= 0){
            printf("%d ", no);
            no--;                   /*no值递减*/
        }   
        putchar('\n');              /*换行*/
    }
    else{
        while (no <= 0){
            printf("%d", no);
            no++;
        }
    }
    return (0);
}
