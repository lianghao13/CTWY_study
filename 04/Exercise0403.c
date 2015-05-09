/*
    读取输入的两个整数值,并显示出这两个值之间所后整数之和
*/

#include <stdio.h>

int main() {
    int x1, x2;
    int tmp = 0;
    int sum = 0;

    puts("请输入两个整数");
    printf("整数1：");      scanf("%d", &x1);
    printf("整数2：");      scanf("%d", &x2);

    /*调整输入整数的大小顺序，确保x1<=x2*/
    if (x1 > x2) {
        tmp = x1;
        x1 = x2;
        x2 = tmp;
    }

    tmp = x1;
    do {
        sum += tmp;
        tmp++;
    } while (tmp <= x2);

    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", x1, x2, sum);

    return (0);
}
