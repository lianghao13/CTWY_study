/*
    返回两个整数中较小值的函数
*/

#include <stdio.h>

/*---返回较小整数的值---*/

int minof(int x, int y) {
        return((x < y) ? x : y);
}

int main(void) {
    int na, nb;
    int cln_buf;
    
    puts("请输入两个整数。");
    printf("整数1：");      scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
       ; 
    printf("整数2：");      scanf("%d", &nb);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
       ; 

    printf("较小的整数值是%d。\n", minof(na, nb));

    return (0);
}
