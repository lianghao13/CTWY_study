/*
   显示读取的整数的最后一位数字
*/

#include <stdio.h>

int main(void){
    int no;

    printf("请输入一个整数:");  scanf("%d",&no);

    printf("它的最后一位数字是:%d。\n", no % 10);

    return(0);
}
