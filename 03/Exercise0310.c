/*
    判断两个输入数值之间差与10的比较
*/

#include <stdio.h>

int main(void) {
    int x1, x2;
    int tmp = 0;

    puts("请输入两个整数。");
    printf("整数A：");      scanf("%d", &x1);
    printf("整数B：");      scanf("%d", &x2);

/*    if (x1 < x2 )
        tmp = x2 - x1;
    else
        tmp = x1 - x2;
*/
    tmp = (x1 < x2) ? (x2 - x1) : (x1 - x2);

    if (tmp < 10 || tmp == 10)
        puts("它们的值小于等于10。");
    else
        puts("它们的差大于等于11。");

    return (0);
}
