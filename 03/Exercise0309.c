/*
    判断三个输入数值之间的关系
*/

#include <stdio.h>

int main(void) {
    int x1, x2, x3;

    puts("请输入三个整数。");
    printf("整数A：");      scanf("%d", &x1);
    printf("整数B：");      scanf("%d", &x2);
    printf("整数C：");      scanf("%d", &x3);

    if (x1 == x2 && x2 == x3)
        puts("三个值都相等。");
    else if (x1 == x2 || x2 == x3 || x1 == x3)
        puts("有两个值相等。");
    else
        puts("三个值各不相同。");

    return (0);
}
