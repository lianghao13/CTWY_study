/*
    输入一个整数，纵向显示出该整数个*，如果输入是0以下的整数，则不显示任何内容
*/

#include <stdio.h>

int main(void){
    int no;

    printf("请输入一个正整数：");    scanf("%d", &no);

    while (no-- > 0)
        puts("*");
    /*putchar('\n');*/

    return (0);
}
