/*
    �ж����������Ĵ�С��ϵ
*/

#include <stdio.h>

int main(void) {
    int a, b;

    puts("����������������");
    printf("����A��");      scanf("%d", &a);
    printf("����B��");      scanf("%d", &b);

    if (a == b)
        printf("A��B��ȡ�\n");
    else if (a > b)
        printf("A����B��\n");
    else
        printf("AС��B��\n");

    return (0);
}
