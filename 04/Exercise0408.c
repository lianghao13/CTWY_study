/*
   递增显示从0到输入的正整数为止
*/

#include <stdio.h>

int main(void){
    int i = 1;
    int no;

    printf("请输入一个正整数：");    scanf("%d", &no);

    if (no > 0) {
        while (i <= no) 
            printf("%d,", i++);
        putchar('\n');          //正常输出完成后换行
    }

    return (0);
}
