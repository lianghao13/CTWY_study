/*
    �ж�����������ֵ֮��Ĺ�ϵ
*/

#include <stdio.h>

int main(void) {
    int x1, x2, x3;

    puts("����������������");
    printf("����A��");      scanf("%d", &x1);
    printf("����B��");      scanf("%d", &x2);
    printf("����C��");      scanf("%d", &x3);

    if (x1 == x2 && x2 == x3)
        puts("����ֵ����ȡ�");
    else if (x1 == x2 || x2 == x3 || x1 == x3)
        puts("������ֵ��ȡ�");
    else
        puts("����ֵ������ͬ��");

    return (0);
}
