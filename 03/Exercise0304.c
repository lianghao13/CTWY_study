/*
    判断两个整数的大小关系
*/

#include <stdio.h>

int main(void) {
    int a, b;

    puts("请输入两个整数。");
    printf("整数A：");      scanf("%d", &a);
    printf("整数B：");      scanf("%d", &b);

    if (a == b)
        printf("A和B相等。\n");
    else if (a > b)
        printf("A大于B。\n");
    else
        printf("A小于B。\n");

    return (0);
}
