/*
    确认相等运算符和关系运算符的运算结果
*/

#include <stdio.h>

int main(void) {
    int x1, x2;

    puts("请输入任意两个整数。");
    printf("整数x1 = ");    scanf("%d", &x1);
    printf("整数x2 = ");    scanf("%d", &x2);

    printf("相等运算x1==x2的运算结果是：%d。\n", (x1 == x2));
    printf("相等运算x1!=x2的运算结果是：%d。\n", (x1 != x2));
    printf("关系运算x1<x2的运算结果是：%d。\n", (x1 < x2));
    printf("关系运算x1>x2的运算结果是：%d。\n", (x1 > x2));
    printf("关系运算x1<=x2的运算结果是：%d。\n", (x1 <= x2));
    printf("关系运算x1>=x2的运算结果是：%d。\n", (x1 >= x2));

    return (0);
}
