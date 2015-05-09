/*
    从输入整数开始倒数到0（第二版）
*/

#include <stdio.h>

int main(void){
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    while (no >= 0)
        printf("%d ", no--);    /*no值在显示后递减*/
    
    putchar('\n');              /*换行*/

    return (0);
}
