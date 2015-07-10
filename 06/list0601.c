/*
    返回两个整数中较大值的函数
*/

#include <stdio.h>

/*返回较大整数的值---*/

int maxof(int x, int y) {
    if (x > y)
        return (x);
    else
        return (y);
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

    printf("较大的整数值是%d。\n", maxof(na, nb));

    return (0);
}
